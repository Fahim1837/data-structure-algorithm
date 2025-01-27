# 1. Second Largest Element in an Array

Given an array of positive integers arr[] of size n, the task is to find second largest distinct element in the array.
**Note:** If the second largest element does not exist, return -1.
    
**Examples:**

***Input:*** `arr[] = [12, 35, 1, 10, 34, 1]`
***Output:*** `34`  
***Explanation:*** The largest element of the array is 35 and the second largest element is 34.
    
***Input:*** `arr[] = [10, 5, 10]`
***Output:*** `5`
***Explanation:*** The largest element of the array is *10* and the second largest element is *5*.

***Input:*** `arr[] = [10, 10, 10]`
***Output:*** `-1`
***Explanation:*** The largest element of the array is *10* there is no second largest element.

# 2. Third Largest Element in an Array of Distinct Elements

**Examples:**

***Input:*** `arr[] = {1, 14, 2, 16, 10, 20}`
***Output:*** `14`  
***Explanation:*** Largest element is *20*, second largest element is *16* and third largest element is *14*
    
***Input:*** `arr[] = {19, -10, 20, 14, 2, 16, 10}`
***Output:*** `16`
***Explanation:*** Largest element is *20*, second largest element is *19* and third largest element is *16*.

# 3. Maximum Product of a Triplet (subsequence of size 3) in Array

**Examples:**

***Input:*** `arr[] = [10, 3, 5, 6, 20]`
***Output:*** `1200`  
***Explanation:*** Multiplication of *10*, *6* and *20*.
    
***Input:*** `arr[] = [-10, -3, -5, -6, -20]`
***Output:*** `-90`
***Explanation:*** Multiplication of *-3*, *-5* and *-6*.

***Input:*** `arr[] = [1, -4, 3, -6, 7, 0]`
***Output:*** `168`
***Explanation:*** Multiplication of *7*, *-6* and *-4*.

# 4. Maximum Consecutive One’s (or Zeros) in a Binary Array

Given a binary array, find the count of a maximum number of consecutive 1s present in the array.

**Examples:**

***Input:*** `arr[] = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1}`
***Output:*** `4`  
***Explanation:*** The maximum number of consecutive *1’s* in the array is *4* from index *8-11*.
    
***Input:*** `arr[] = {0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1}`
***Output:*** `1`
***Explanation:*** The maximum number of consecutive *0’s* in the array is *1* from index *0-1*.

# 5. Move All Zeros to End of array

Given an array of integers arr[], the task is to move all the zeros to the end of the array while maintaining the relative order of all non-zero elements.

**Examples:**

***Input:*** `arr[] = [1, 2, 0, 4, 3, 0, 5, 0]`
***Output:*** `arr[] = [1, 2, 4, 3, 5, 0, 0, 0]`  
***Explanation:*** There are three 0s that are moved to the end.
    
***Input:*** `arr[] = [10, 20, 30]`
***Output:*** `arr[] = [10, 20, 30]`
***Explanation:*** No change in array as there are no 0s.

***Input:*** `arr[] = [0, 0]`
***Output:*** `arr[] = [0, 0]`
***Explanation:*** No change in array as there are all 0s.

# 6. Rotate an Array by d - Counterclockwise or Left

Given an array of integers arr[] of size n, the task is to rotate the array elements to the left by d positions.

**Examples:**

***Input:*** `arr[] = {1, 2, 3, 4, 5, 6}, d = 2`
***Output:*** `arr[] = {3, 4, 5, 6, 1, 2}`  
***Explanation:*** After first left rotation, `arr[]` becomes `{2, 3, 4, 5, 6, 1}` and after the second rotation, `arr[]` becomes `{3, 4, 5, 6, 1, 2}`

***Input:*** `arr[] = {1, 2, 3}, d = 4`
***Output:*** `arr[] = {2, 3, 1}`
***Explanation:*** The array is rotated as follows:
- After first left rotation, arr[] = {2, 3, 1}
- After second left rotation, arr[] = {3, 1, 2}
- After third left rotation, arr[] = {1, 2, 3}
- After fourth left rotation, arr[] = {2, 3, 1}
