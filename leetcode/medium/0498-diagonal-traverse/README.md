# Diagonal Traverse

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an `m x n` matrix `mat`, return  *an array of all the elements of the array in a diagonal order*.

 

Original
C++
 **Example 1:** 

```
Input: mat = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,4,7,5,3,6,8,9]

```

 **Example 2:** 

```
Input: mat = [[1,2],[3,4]]
Output: [1,2,3,4]

```

 

 **Constraints:** 

- m == mat.length
- n == mat[i].length
- 1 <= m, n <= 104
- 1 <= m * n <= 104
- -105 <= mat[i][j] <= 105

## Solution

**Language:** C++  
**Runtime:** 11 ms (beats 38.24%)  
**Memory:** 25.3 MB (beats 35.72%)  
**Submitted:** 2026-11-25T14:50:03.155Z  

```cpp
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> Result;
        Result.reserve(m * n);

        for(int i = 0 ; i < m + n - 1 ; i++){
            vector<int> Shinyu;
            int r = max(0, i - n + 1);
            int c = i - r;
            while(r < m && c >= 0){
                Shinyu.push_back(mat[r][c]);
                ++r;
                --c;
            }

            if(i % 2 == 0) reverse(Shinyu.begin(), Shinyu.end());
            Result.insert(Result.end(), Shinyu.begin(), Shinyu.end());
        }

        return Result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/diagonal-traverse/)