#include<iostream>
#include<vector>

using namespace std;

/*
 Approach 1 -> 2 pass search
 Time Complexity: O(2*n) ~ O(n), as we are traversing the array twice.
 Auxiliary space: O(1) 
 Find the max three elements and min two elements first, then multiply between 
 them to get the max value of the triplet. The minimum value is required because 
 of the chance of negative value presence
 */
int max_product_triplet (const vector <int> &arr) {
    int max1 = arr[0], max2 = arr[0], max3 = arr[0];
    int min1 = arr[0], min2 = arr[0];
    int n = arr.size();

    for (int i= 0; i < n; i++) {
        if (arr[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }

        if (arr[i] > max2 && arr[i] < max1) {
            max3 = max2;
            max2 = arr[i];
        }

        if (arr[i] > max3 && arr[i] < max2) {
            max3 = arr[i];
        }
    }

    for (int i= 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        }

        if (arr[i] < min2 && arr[i] > min1) {
            min2 = arr[i];
        }
    }
    const int  mul1 = max1 * max2 * max3;
    const int mul2 = max1 * min1 * min2;

    if (mul1 > mul2) return mul1;
    else return mul2;
}

int main() {
    vector<int> vec = {1, -4, 3, -6, 7, 0};
    int x = max_product_triplet(vec);
    cout << x << endl;

}