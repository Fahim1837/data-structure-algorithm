#include<iostream>
#include<vector>

using namespace std;

/*
 Approach 1 -> 1 pass search
 Time Complexity: O(n), as we are traversing the array only once.
 Auxiliary space: O(1) 
 
 */
int second_largest_element1(const vector<int> &arr) {
    int max1 = arr[0];
    int max2 = 0;

    for (int i =0; i < arr.size(); i++) {
        if (arr[i] > max1) {
            max1 = arr[i];
        }
        if (i >0) {
            if (arr[i-1] > max2 && arr[i-1] < max1) {
                max2 = arr[i-1];
            }
            else {
                max2 = -1;
            }
        }
    }
    return max2;
}

/*
 Approach 2 -> 1 pass search
 Time Complexity: O(n), as we are traversing the array only once.
 Auxiliary space: O(1) 
 Although same Time & Space Complexity, it has less code
 */
int second_largest_element2(const vector<int> &arr) {
    int max1, max2 = -1;
    int n = arr.size();

    for (int i =0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 =arr[i];
        }
        else if(arr[i] < max1 && arr[i] > max2) {
            max2 = arr[i];
        }
    }
    return max2;
}

int main() {
    vector<int> vc = {10, 10, 10};
    vector<int> vc1 = {12, 35, 1, 10, 34, 1};
   int x = second_largest_element1(vc);

    cout << x << endl;
}