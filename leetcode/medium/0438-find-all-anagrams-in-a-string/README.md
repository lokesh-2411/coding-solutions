# Find All Anagrams in a String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two strings `s` and `p`, return an array of all the start indices of `p`'s anagrams in `s`. You may return the answer in  **any order**.

 

 **Example 1:** 

```
Input: s = "cbaebabacd", p = "abc"
Output: [0,6]
Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".

```

 **Example 2:** 

```
Input: s = "abab", p = "ab"
Output: [0,1,2]
Explanation:
The substring with start index = 0 is "ab", which is an anagram of "ab".
The substring with start index = 1 is "ba", which is an anagram of "ab".
The substring with start index = 2 is "ab", which is an anagram of "ab".

```

 

 **Constraints:** 

- 1 <= s.length, p.length <= 3 * 104
- s and p consist of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 68.48%)  
**Memory:** 11.5 MB (beats 85.23%)  
**Submitted:** 2026-09-16T15:34:51.295Z  

```cpp
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size();
        int m = p.size();
        if(n < m) return ans;

        vector<int> freqP(26, 0), freqS(26, 0);

        for(char c : p) freqP[c - 'a']++;

        for(int i = 0 ; i < n ; i++){
            freqS[s[i] - 'a']++;

            if(i >= m){
                freqS[s[i - m] - 'a']--;
            }

            if(freqS == freqP){
                ans.push_back(i - m + 1);
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-all-anagrams-in-a-string/)