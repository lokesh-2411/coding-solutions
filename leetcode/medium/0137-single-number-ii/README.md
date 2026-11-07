# Single Number II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` where every element appears  **three times**  except for one, which appears  **exactly once**.  *Find the single element and return it*.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

 **Example 1:** 

```
Input: nums = [2,2,3,2]
Output: 3

```

 **Example 2:** 

```
Input: nums = [0,1,0,1,0,1,99]
Output: 99

```

 

 **Constraints:** 

- 1 <= nums.length <= 3 * 104
- -231 <= nums[i] <= 231 - 1
- Each element in nums appears exactly three times except for one element which appears once.

## Solution

**Language:** C++  
**Runtime:** 423 ms (beats 5.30%)  
**Memory:** 17.4 MB (beats 5.37%)  
**Submitted:** 2026-11-07T17:40:57.662Z  

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> S(nums.begin(), nums.end());
        for (int i : S) {
            if (count(nums.begin(), nums.end(), i) == 1) {
                return i;
            }
        }
        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/single-number-ii/)