# Single Element in a Sorted Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return  *the single element that appears only once*.

Your solution must run in `O(log n)` time and `O(1)` space.

 

 **Example 1:** 

```
Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2

```

 **Example 2:** 

```
Input: nums = [3,3,7,7,10,11,11]
Output: 10

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- 0 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 26.2 MB (beats 71.78%)  
**Submitted:** 2026-09-20T11:13:43.180Z  

```cpp
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        while(i < j){
            int mid = (i + j) / 2;
            if(mid % 2 != 0){
                mid -= 1;
            }
            if(nums[mid] == nums[mid + 1]){
                i = mid + 2;
            }
            else{
                j = mid;
            }
        }
        return nums[i];
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/single-element-in-a-sorted-array/)