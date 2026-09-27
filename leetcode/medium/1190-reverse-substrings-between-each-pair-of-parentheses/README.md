# Reverse Substrings Between Each Pair of Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a string `s` that consists of lower case English letters and brackets.

Reverse the strings in each pair of matching parentheses, starting from the innermost one.

Your result should  **not**  contain any brackets.

 

 **Example 1:** 

```
Input: s = "(abcd)"
Output: "dcba"

```

 **Example 2:** 

```
Input: s = "(u(love)i)"
Output: "iloveu"
Explanation: The substring "love" is reversed first, then the whole string is reversed.

```

 **Example 3:** 

```
Input: s = "(ed(et(oc))el)"
Output: "leetcode"
Explanation: First, we reverse the substring "oc", then "etco", and finally, the whole string.

```

 

 **Constraints:** 

- 1 <= s.length <= 2000
- s only contains lower case English characters and parentheses.
- It is guaranteed that all parentheses are balanced.

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 46.55%)  
**Memory:** 10 MB (beats 36.40%)  
**Submitted:** 2026-09-27T15:33:46.279Z  

```cpp
class Solution {
public:
    string reverseParentheses(string s) {
        vector<char> okay;
        for(char ch : s){
            if(ch == ')'){
                vector<char> temp;
                while(!okay.empty() && okay.back() != '('){
                    temp.push_back(okay.back());
                    okay.pop_back();
                }
                if(!okay.empty()) okay.pop_back();
                for(char x : temp){
                    okay.push_back(x);
                }
            }
            else{
                okay.push_back(ch);
            }
        }
        return string(okay.begin(), okay.end());
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/)