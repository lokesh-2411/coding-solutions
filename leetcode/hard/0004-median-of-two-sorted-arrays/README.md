# Median of Two Sorted Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return  **the median**  of the two sorted arrays.

The overall run time complexity should be `O(log (m+n))`.

 

 **Example 1:** 

```
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

```

 **Example 2:** 

```
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

```

 

 **Constraints:** 

- nums1.length == m
- nums2.length == n
- 0 <= m <= 1000
- 0 <= n <= 1000
- 1 <= m + n <= 2000
- -106 <= nums1[i], nums2[i] <= 106

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 36.53%)  
**Memory:** 95.8 MB (beats 24.19%)  
**Submitted:** 2026-10-01T16:15:08.222Z  

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int size = n1 + n2;

        vector<int> result(size);

        int i = 0, j = 0, k = 0;

        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                result[k++] = nums1[i++];
            } else {
                result[k++] = nums2[j++];
            }
        }

        while (i < n1) {
            result[k++] = nums1[i++];
        }

        while (j < n2) {
            result[k++] = nums2[j++];
        }

        if (size % 2 != 0) {
            return static_cast<double>(result[size / 2]);
        } else {
            int mid = size / 2;
            return (static_cast<double>(result[mid]) + result[mid - 1]) / 2.0;
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/median-of-two-sorted-arrays/)