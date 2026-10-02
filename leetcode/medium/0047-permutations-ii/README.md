# Permutations II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a collection of numbers, `nums`, that might contain duplicates, return  *all possible unique permutations  **in any order**.* 

 

 **Example 1:** 

```
Input: nums = [1,1,2]
Output:
[[1,1,2],
 [1,2,1],
 [2,1,1]]

```

 **Example 2:** 

```
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 8
- -10 <= nums[i] <= 10

## Solution

**Language:** C++  
**Runtime:** 35 ms (beats 9.84%)  
**Memory:** 12.2 MB (beats 37.90%)  
**Submitted:** 2026-10-02T07:18:28.447Z  

```cpp
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        backtrack(nums, 0, ans);

        return vector<vector<int>>(ans.begin(), ans.end());
    }

    void backtrack(vector<int>& nums, int start, set<vector<int>>& ans){
        if(start == nums.size()){
            ans.insert(nums);
            return;
        }
        for(int i = start ; i < nums.size() ; i++){
            swap(nums[start], nums[i]);
            backtrack(nums, start + 1, ans);
            swap(nums[start], nums[i]);
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/permutations-ii/)