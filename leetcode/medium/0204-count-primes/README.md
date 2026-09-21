# Count Primes

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer `n`, return  *the number of prime numbers that are strictly less than*  `n`.

 

 **Example 1:** 

```
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

```

 **Example 2:** 

```
Input: n = 0
Output: 0

```

 **Example 3:** 

```
Input: n = 1
Output: 0

```

 

 **Constraints:** 

- 0 <= n <= 5 * 106

## Solution

**Language:** C++  
**Runtime:** 584 ms (beats 29.99%)  
**Memory:** 249 MB (beats 5.36%)  
**Submitted:** 2026-09-21T17:01:51.615Z  

```cpp
class Solution {
public:
    int countPrimes(int n) {
        if(n < 3) return 0;

        vector<char> isComposite(n, 0);
        int count = 1; 

        for(int i = 3 ; i < n ; i += 2){
            if(!isComposite[i]){
                count++;
                if((long long)i * i < n){
                    for(long long j = (long long)i * i ; j < n ; j += 2 * i){
                        isComposite[j] = 1;
                    }
                }
            }
        }
        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-primes/)