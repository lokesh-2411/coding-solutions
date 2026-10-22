# Find First Palindromic String in the Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of strings `words`, return  *the first  **palindromic**  string in the array*. If there is no such string, return  *an  **empty string*** `""`.

A string is  **palindromic**  if it reads the same forward and backward.

 

 **Example 1:** 

```
Input: words = ["abc","car","ada","racecar","cool"]
Output: "ada"
Explanation: The first string that is palindromic is "ada".
Note that "racecar" is also palindromic, but it is not the first.

```

 **Example 2:** 

```
Input: words = ["notapalindrome","racecar"]
Output: "racecar"
Explanation: The first and only string that is palindromic is "racecar".

```

 **Example 3:** 

```
Input: words = ["def","ghi"]
Output: ""
Explanation: There are no palindromic strings, so the empty string is returned.

```

 

 **Constraints:** 

- 1 <= words.length <= 100
- 1 <= words[i].length <= 100
- words[i] consists only of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 10 ms (beats 21.52%)  
**Memory:** 27.6 MB (beats 28.95%)  
**Submitted:** 2026-10-22T16:47:59.171Z  

```cpp
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (const string& w : words) {
            string r(w.rbegin(), w.rend());
            if (w == r) return w;
        }
        return "";
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-first-palindromic-string-in-the-array/)