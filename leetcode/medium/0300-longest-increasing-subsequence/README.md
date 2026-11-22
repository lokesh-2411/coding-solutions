# Longest Increasing Subsequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums`, return *the length of the longest  **strictly increasing**   subsequence***.

 

Original
C++
 **Example 1:** 

```
Input: nums = [10,9,2,5,3,7,101,18]
Output: 4
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.

```

 **Example 2:** 

```
Input: nums = [0,1,0,3,2,3]
Output: 4

```

 **Example 3:** 

```
Input: nums = [7,7,7,7,7,7,7]
Output: 1

```

 

 **Constraints:** 

- 1 <= nums.length <= 2500
- -104 <= nums[i] <= 104

 

 **Follow up:**  Can you come up with an algorithm that runs in `O(n log(n))` time complexity?

## Solution

**Language:** C++  
**Runtime:** 73 ms (beats 46.60%)  
**Memory:** 14.4 MB (beats 56.92%)  
**Submitted:** 2026-11-22T15:16:09.791Z  

```cpp
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 1);
        int ans = 1;

        for(int i = 1 ; i < n ; i++){
            for(int j = 0 ; j < i ; j++){
                if(nums[j] < nums[i]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-increasing-subsequence/)