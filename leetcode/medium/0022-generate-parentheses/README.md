# Generate Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given `n` pairs of parentheses, write a function to  *generate all combinations of well-formed parentheses*.

 

 **Example 1:** 

```
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

```

 **Example 2:** 

```
Input: n = 1
Output: ["()"]

```

 

 **Constraints:** 

- 1 <= n <= 8

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 12.9 MB (beats 95.23%)  
**Submitted:** 2026-10-02T06:37:21.269Z  

```cpp
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        backtrack(s, 0, 0, n, ans);
        return ans;
    }

    void backtrack(string &s, int open, int close, int n, vector<string> &ans){
        if(s.size() == 2 * n){
            ans.push_back(s);
            return;
        }
        if(open < n){
            s.push_back('(');
            backtrack(s, open + 1, close, n, ans);
            s.pop_back();
        }
        if(close < open){
            s.push_back(')');
            backtrack(s, open, close + 1, n, ans);
            s.pop_back();
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/generate-parentheses/)