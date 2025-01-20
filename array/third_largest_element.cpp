#include<iostream>
#include<vector>
#include<set>

using namespace std;

/*
 Approach 1 -> Sorting with set and search 3rd last element
 Time Complexity: O(nlog(n)), as we are sorting the array using set.
 Auxiliary space: O(n), as taking an extra array of sets 
 */
int third_largest_element1 (const vector<int> &arr) {
        set<int> s(arr.begin(), arr.end());

        auto it = s.end();
        advance(it, -5);
        return *it;
}

/*
 Approach 2 -> 1 pass search
 Time Complexity: O(n), as we are traversing the array only once.
 Auxiliary space: O(1) 
 Similar like 2nd largest element style, but with an extra variable
 */
int third_largest_element2 (const vector<int> &arr) {
    int max1 = arr[0], max2 = arr[0], max3 = arr[0];
    int n = arr.size();
    for (int i = 0; i < n ; i++) {
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
    return max3;
}

int main() {
    vector <int> vec = {1, 14, 2, 16, 10, 20};

    int x = third_largest_element2(vec);
    cout << x << endl;
}