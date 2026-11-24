# Maximum Subarray With Equal Products

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an array of  **positive**  integers `nums`.

An array `arr` is called  **product equivalent**  if `prod(arr) == lcm(arr) * gcd(arr)`, where:

- prod(arr) is the product of all elements of arr.
- gcd(arr) is the GCD of all elements of arr.
- lcm(arr) is the LCM of all elements of arr.

Return the length of the  **longest**   **product equivalent**  subarray of `nums`.

 

Original
C++
 **Example 1:** 

 **Input:**  nums = [1,2,1,2,1,1,1]

 **Output:**  5

 **Explanation:**  

The longest product equivalent subarray is `[1, 2, 1, 1, 1]`, where `prod([1, 2, 1, 1, 1]) = 2`, `gcd([1, 2, 1, 1, 1]) = 1`, and `lcm([1, 2, 1, 1, 1]) = 2`.

 **Example 2:** 

 **Input:**  nums = [2,3,4,5,6]

 **Output:**  3

 **Explanation:**  

The longest product equivalent subarray is `[3, 4, 5].`

 **Example 3:** 

 **Input:**  nums = [1,2,3,1,4,5,1]

 **Output:**  5

 

 **Constraints:** 

- 2 <= nums.length <= 100
- 1 <= nums[i] <= 10

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 72.03%)  
**Memory:** 27.9 MB (beats 90.03%)  
**Submitted:** 2026-11-24T15:21:58.107Z  

```cpp
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int N = nums.size();
        int Max = 1;

        for (int i = 0; i < N; i++) {
            long long Prod = 1;
            long long Gcd = 0;
            long long Lcm = 1;

            for (int j = i; j < N; j++) {
                Prod *= nums[j];
                Gcd = gcd(Gcd, (long long)nums[j]);
                Lcm = lcm(Lcm, (long long)nums[j]);

                if (Prod == Gcd * Lcm) {
                    Max = max(Max, j - i + 1);
                }

                if (Prod > 25200) break;
            }
        }

        return Max;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-subarray-with-equal-products/)