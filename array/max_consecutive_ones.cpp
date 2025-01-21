#include<iostream>
#include<vector>

using namespace std;

int max (const int &a, const int &b) {
    return (a > b) ?  a : b;
}

/*
 Approach 1 -> 1 pass search
 Time Complexity: O(2*n) ~ O(n), as we are traversing the array only once.
 Auxiliary space: O(n) 
 Use a counter for counting consecutive ones and store it to a vector.
 Reset counter to 0 whenever a zero is found.
 Iterate through the vector to find max value.
 */
int max_consecutive_ones1(const vector<int> &arr) {
    vector<int> countList = {};
    int count = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        if (arr[i]) {
            count ++;
        } else {
            countList.push_back(count);
            count = 0;
         }
    }
    countList.push_back(count);
    int max1 = countList[0];

    for (int i =0; i < countList.size(); i++) {
        if (countList[i] > max1) {
            max1 = countList[i];
        }
    }

    return max1;
}

/*
 Approach 2 -> 1 pass search
 Time Complexity: O(n), as we are traversing the array only once.
 Auxiliary space: O(1) 
 Use a counter for counting consecutive ones and store it to result.
 Reset counter to 0 whenever a zero is found
 */
int max_consecutive_ones2(const vector<int> &arr) {
    int count =0;
    int result = 0;
    int n = arr.size();

    for (int i=0; i < n; i++) {
        if (arr[i]) {
            count ++;
            continue;
        }

        result = max (result, count);
        count = 0;
    }
    result = max (result, count);
    return result;
}

int main () {
    vector <int> vec = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1};
    int x = max_consecutive_ones2(vec);
    cout << x << endl;
}