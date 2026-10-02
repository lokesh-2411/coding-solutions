# Subsets II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` that may contain duplicates, return  *all possible*   *subsets** (the power set)*.

The solution set  **must not**  contain duplicate subsets. Return the solution in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [[],[0]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 13.01%)  
**Memory:** 11.1 MB (beats 19.41%)  
**Submitted:** 2026-10-02T07:25:50.801Z  

```cpp
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> result;
        int n = nums.size();
        int total = 1 << n;

        for(int mask = 0 ; mask < total ; mask++){
            vector<int> okay;
            for(int i = 0 ; i < n ; i++){
                if(mask & (1 << i)){
                    okay.push_back(nums[i]);
                }
            }
            result.insert(okay);
        }

        return vector<vector<int>>(result.begin(), result.end());
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets-ii/)