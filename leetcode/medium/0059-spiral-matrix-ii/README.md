# Spiral Matrix II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a positive integer `n`, generate an `n x n` `matrix` filled with elements from `1` to `n2` in spiral order.

 

 **Example 1:** 

```
Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]

```

 **Example 2:** 

```
Input: n = 1
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= n <= 20

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.4 MB (beats 77.57%)  
**Submitted:** 2026-09-10T06:05:07.238Z  

```cpp
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top = 0;
        int bot = n - 1;
        int left = 0;
        int right = n - 1;
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int val = 1;

        while(left <= right && top <= bot){
            
            for(int i = left ; i <= right ; i++){
                matrix[top][i] = val;
                val++;
            }
            top++;

            for(int i = top ; i <= bot ; i++){
                matrix[i][right] = val;
                val++;
            }
            right--;

            for(int i = right ; i >= left ; i--){
                matrix[bot][i] = val;
                val++;
            }
            bot--;

            for(int i = bot ; i >= top ; i--){
                matrix[i][left] = val;
                val++;
            }
            left++;

        }
        return matrix; 
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/spiral-matrix-ii/)