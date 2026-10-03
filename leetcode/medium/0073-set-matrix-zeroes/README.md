# Set Matrix Zeroes

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an `m x n` integer matrix `matrix`, if an element is `0`, set its entire row and column to `0`'s.

You must do it in place.

 

 **Example 1:** 

```
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]

```

 **Example 2:** 

```
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[0].length
- 1 <= m, n <= 200
- -231 <= matrix[i][j] <= 231 - 1

 

 **Follow up:** 

- A straightforward solution using O(mn) space is probably a bad idea.
- A simple improvement uses O(m + n) space, but still not the best solution.
- Could you devise a constant space solution?

## Solution

**Language:** C++  
**Runtime:** 51 ms (beats 5.46%)  
**Memory:** 22 MB (beats 5.19%)  
**Submitted:** 2026-10-03T08:15:06.284Z  

```cpp
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> col;
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(matrix[i][j] == 0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }

        for(int i = 0 ; i < row.size() ; i++){

            for(int j = 0 ; j < n ; j++){
                matrix[row[i]][j] = 0;
            }

            for(int j = 0 ; j < m ; j++){
                matrix[j][col[i]] = 0;
            }

        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/set-matrix-zeroes/)