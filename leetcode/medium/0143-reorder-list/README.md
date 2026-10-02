# Reorder List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the head of a singly linked-list. The list can be represented as:

```
L0 → L1 → … → Ln - 1 → Ln

```

 *Reorder the list to be on the following form:* 

```
L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …

```

You may not modify the values in the list's nodes. Only nodes themselves may be changed.

 

 **Example 1:** 

```
Input: head = [1,2,3,4]
Output: [1,4,2,3]

```

 **Example 2:** 

```
Input: head = [1,2,3,4,5]
Output: [1,5,2,4,3]

```

 

 **Constraints:** 

- The number of nodes in the list is in the range [1, 5 * 104].
- 1 <= Node.val <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 24 MB (beats 7.92%)  
**Submitted:** 2026-10-02T07:08:25.586Z  

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        vector<int> Arr;
        ListNode* temp = head;

        while(temp != nullptr){
            Arr.push_back(temp -> val);
            temp = temp -> next;
        }

        int n = Arr.size();
        vector<int> Ans;

        for(int i = 0 ; i < n / 2 ; i++){
            Ans.push_back(Arr[i]);
            Ans.push_back(Arr[n - i - 1]);
        }

        if(n % 2 != 0) Ans.push_back(Arr[(n / 2)]);

        temp = head;
        int idx = 0;
        while(temp != nullptr){
            temp -> val = Ans[idx++];
            temp = temp -> next;
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reorder-list/)