# Product of Array Except Self

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums`, return  *an array*  `answer`  *such that*  `answer[i]`  *is equal to the product of all the elements of*  `nums`  *except*  `nums[i]`.

The product of any prefix or suffix of `nums` is  **guaranteed**  to fit in a  **32-bit**  integer.

You must write an algorithm that runs in `O(n)` time and without using the division operation.

 

Original
C++
 **Example 1:** 

```
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

```

 **Example 2:** 

```
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]

```

 

 **Constraints:** 

- 2 <= nums.length <= 105
- -30 <= nums[i] <= 30
- The input is generated such that answer[i] is guaranteed to fit in a 32-bit integer.

 

 **Follow up:**  Can you solve the problem in `O(1)` extra space complexity? (The output array  **does not**  count as extra space for space complexity analysis.)

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 71.45%)  
**Memory:** 40.2 MB (beats 52.79%)  
**Submitted:** 2026-11-23T15:49:17.275Z  

```cpp
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int Prod = 1;
        int n = nums.size();
        vector<int> shinyu(n, 1);

        for(int i = 0 ; i < n ; i++){
            shinyu[i] = Prod;
            Prod *= nums[i];
        }

        int Okay = 1;
        for(int i = n - 1 ; i >= 0 ; i--){
            shinyu[i] *= Okay;
            Okay *= nums[i];
        }

        return shinyu;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/product-of-array-except-self/)