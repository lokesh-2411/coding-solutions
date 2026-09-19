# Multiply Strings

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two non-negative integers `num1` and `num2` represented as strings, return the product of `num1` and `num2`, also represented as a string.

 **Note:**  You must not use any built-in BigInteger library or convert the inputs to integer directly.

 

 **Example 1:** 

```
Input: num1 = "2", num2 = "3"
Output: "6"

```

 **Example 2:** 

```
Input: num1 = "123", num2 = "456"
Output: "56088"

```

 

 **Constraints:** 

- 1 <= num1.length, num2.length <= 200
- num1 and num2 consist of digits only.
- Both num1 and num2 do not contain any leading zero, except the number 0 itself.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 27.70%)  
**Memory:** 9.5 MB (beats 71.83%)  
**Submitted:** 2026-09-19T17:34:39.984Z  

```cpp
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";

        int n1 = num1.size(), n2 = num2.size();
        vector<int> result(n1 + n2, 0);

        for(int i = n1 - 1 ; i >= 0 ; i--){
            int digit1 = num1[i] - '0';
            for(int j = n2 - 1 ; j >= 0 ; j--){
                int digit2 = num2[j] - '0';
                int mul = digit1 * digit2;

                int p1 = i + j;
                int p2 = i + j + 1;
                int sum = mul + result[p2];

                result[p2] = sum % 10;
                result[p1] += sum / 10;
            }
        }

        int start = 0;
        while(start < (int)result.size() - 1 && result[start] == 0){
            start++;
        }

        string ans;
        for(int i = start ; i < (int)result.size() ; i++){
            ans += char('0' + result[i]);
        }

        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/multiply-strings/)