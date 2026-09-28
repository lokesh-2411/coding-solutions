# Combinations

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two integers `n` and `k`, return  *all possible combinations of*  `k`  *numbers chosen from the range*  `[1, n]`.

You may return the answer in  **any order**.

 

 **Example 1:** 

```
Input: n = 4, k = 2
Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
Explanation: There are 4 choose 2 = 6 total combinations.
Note that combinations are unordered, i.e., [1,2] and [2,1] are considered to be the same combination.

```

 **Example 2:** 

```
Input: n = 1, k = 1
Output: [[1]]
Explanation: There is 1 choose 1 = 1 total combination.

```

 

 **Constraints:** 

- 1 <= n <= 20
- 1 <= k <= n

## Solution

**Language:** C++  
**Runtime:** 35 ms (beats 89.88%)  
**Memory:** 62.6 MB (beats 72.19%)  
**Submitted:** 2026-09-28T08:18:02.870Z  

```cpp
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(result, current, 1, n, k);
        return result;
    }
private:
    void backtrack(vector<vector<int>>& result, vector<int>& current, int start, int n, int k){
        if(current.size() == k){
            result.push_back(current);
            return;
        }

        for(int i = start ; i <= n - (k - current.size()) + 1 ; i++){
            current.push_back(i);
            backtrack(result, current, i + 1, n, k);
            current.pop_back();
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/combinations/)