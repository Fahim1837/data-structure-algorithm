#include<iostream>
#include<vector>

using namespace std;

void print (const vector<int> &arr) {
    cout << "[ " ;
    for (int i = 0; i <arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n";
}

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

/*
 Approach 1 -> 1 pass search
 Time Complexity: O(n), as we are traversing the array only once.
 Auxiliary space: O(n), as an extra array is used. 
 An array is filled up upto d element. The main array is popped up.
 The main array is now fed element one by one from supporting array.
 */
void rotate_array1(vector<int> &arr, int d) {
    vector<int> newArr;
    int n = arr.size();
    int shift = 0;
    if (d >= n ) {
        shift = d % n;
    }
    else {
        shift = d;
    }

    for(int i =0; i < shift; i++) {
        newArr.push_back(arr[0]);
        arr.erase(arr.begin());
    }
    for (int i=0; i < newArr.size(); i++) {
        arr.push_back(newArr[i]);
    }
}

/*
 Approach 2 -> 3 reversal system
 Time Complexity: O(3n) ~ O(n), as we are reversing the array 3 times.
 Auxiliary space: O(1), as an extra array is used. 
 Using two pointe method to reverse the element upto d element and from d to last element
 */
void rotate_array2 (vector<int> &arr, int d) {
    int n = arr.size();
    if (d > n) {
        d %= n;
    }

//  Reverse all
    for (int i= 0; i < n - i; i++){
        swap(arr[i], arr[n- 1 -i]);
    }
    
//  Reverse first n-d element
    for (int i=0; i < n- d - i; i++) {
        swap (arr[i], arr[n - 1 - d - i]);
    }

//  Reverse last n-d element
    for (int i=n - d, j = n ; i < j; i++, j--) {
        swap (arr[i], arr[j - 1]);
    }
}

int main() {
    int d = 4;
    vector<int> vec = {1, 2, 3};
    vector<int> vec1 = {1, 2, 3, 4, 5};

    rotate_array1 (vec, d);
    rotate_array2 (vec1, d);

    print (vec1);
    return 0;
}