# 3Sum Closest

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` of length `n` and an integer `target`.

Find three integers at  **distinct indices**  in `nums` such that the sum is  **closest**  to `target`.

Return the sum of the three integers.

You may assume that each input would have  **exactly**  one solution.

 

 **Example 1:** 

```
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

```

 **Example 2:** 

```
Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).

```

 

 **Constraints:** 

- 3 <= nums.length <= 500
- -1000 <= nums[i] <= 1000
- -104 <= target <= 104

## Solution

**Language:** C++  
**Runtime:** 31 ms (beats 6.84%)  
**Memory:** 58.4 MB (beats 14.92%)  
**Submitted:** 2026-09-14T16:03:40.452Z  

```cpp
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1, k = n - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum > target){
                    ans.push_back((sum));
                    k--;
                }
                else if(sum < target){
                    ans.push_back(sum);
                    j++;
                }
                else{
                    ans.push_back(sum);
                    k--;
                    j++;

                    while(j < k && nums[j] == nums[j - 1]) j++;
                    while(j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }

        int okay = ans[0];
        int val = abs(target - ans[0]);
        for(int i = 1 ; i < ans.size() ; i++){
            if(abs(target - ans[i]) < val){
                val = abs(target - ans[i]);
                okay = ans[i];
            }
        }
        
        return okay;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/3sum-closest/)