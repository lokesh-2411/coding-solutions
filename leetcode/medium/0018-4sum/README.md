# 4Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array `nums` of `n` integers, return  *an array of all the  **unique**  quadruplets*  `[nums[a], nums[b], nums[c], nums[d]]` such that:

- 0 <= a, b, c, d < n
- a, b, c, and d are distinct.
- nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

```

 **Example 2:** 

```
Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 200
- -109 <= nums[i] <= 109
- -109 <= target <= 109

## Solution

**Language:** C++  
**Runtime:** 18 ms (beats 83.72%)  
**Memory:** 17.5 MB (beats 26.13%)  
**Submitted:** 2026-09-13T16:29:10.430Z  

```cpp
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;

            for(int j = i + 1 ; j < n ; j++){
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                int p = j + 1, q = n - 1;
                while(p < q){
                    long long okay = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];

                    if(okay > target) q--;
                    else if(okay < target) p++;
                    else{
                        ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                        p++;
                        q--;

                        while(p < q && nums[p] == nums[p - 1]) p++;
                        while(p < q && nums[q] == nums[q + 1]) q--;
                    }
                }
            }
        }

        return ans; 
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/4sum/)