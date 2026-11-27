# Maximum Product Subarray

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums`, find a subarray that has the largest product, and return  *the product*.

The test cases are generated so that the answer will fit in a  **32-bit**  integer.

 **Note**  that the product of an array with a single element is the value of that element.

 

 **​​​​​​​Example 1:** 

```
Input:OriginalC++ nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

```

 **Example 2:** 

```
Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.

```

 

 **Constraints:** 

- 1 <= nums.length <= 2 * 104
- -10 <= nums[i] <= 10
- The product of any subarray of nums is guaranteed to fit in a 32-bit integer.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 17.6 MB (beats 88.93%)  
**Submitted:** 2026-11-27T16:21:25.950Z  

```cpp
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curMax = nums[0];
        int curMin = nums[0];
        int result = nums[0];

        for(int i = 1; i < nums.size(); i++){
            int n = nums[i];

            if (n < 0) swap(curMax, curMin);

            curMax = max(n, curMax * n);
            curMin = min(n, curMin * n);

            result = max(result, curMax);
        }

        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-product-subarray/)