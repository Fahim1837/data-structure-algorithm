#include<iostream>
#include<vector>

using namespace std;

/*
 Approach 1 -> 1 pass search
 Time Complexity: O(n), as we are traversing the array only once.
 Auxiliary space: O(n), as an extra array is used. 
 Use a counter for counting number of zeroes. Push back all numbers
 to the new array. Push all the counted zeroes at the end
 */
vector<int> move_all_zeros1 (const vector<int> &arr) {
    int n = arr.size();
    vector<int> copyVector;
    int count = 0;

    for (int i=0; i < n; i++) {
        if (arr[i] != 0) {
            copyVector.push_back(arr[i]);
        }
        else {
            count ++;
        }
    }

    for (int i = 0; i < count; i++) {
        copyVector.push_back(0);
    }
    return copyVector;
}

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

/*
 Approach 2 -> 2 pointer search
 Time Complexity: O(n), as we are traversing the array only once.
 Auxiliary space: O(1),  
 Use two pointers i and j. Swap between arr[i] and arr[j]
 whenever non-zero is found. 
 */
void move_all_zeros2 (vector<int> &arr) {
    int n = arr.size();
    int j = 0;
    for (int i= 0; i <n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

template <typename T>
void print(const vector<T> arr) {
    cout << "[ ";
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n";
}

int main () {
    vector<int> vec = {10, 20, 10, 0, 5};
    
    move_all_zeros2(vec);

    print(vec);

}