# Odd Even Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the `head` of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return  *the reordered list*.

The  **first**  node is considered  **odd**, and the  **second**  node is  **even**, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in `O(1)` extra space complexity and `O(n)` time complexity.

 

 **Example 1:** 

```
Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]

```

 **Example 2:** 

```
Input: head = [2,1,3,5,6,4,7]
Output: [2,3,6,7,1,5,4]

```

 

 **Constraints:** 

- The number of nodes in the linked list is in the range [0, 104].
- -106 <= Node.val <= 106

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 16.5 MB (beats 7.00%)  
**Submitted:** 2026-10-09T14:35:32.646Z  

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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return nullptr;

        vector<int> arr;
        ListNode* temp = head;

        while(temp != nullptr){
            arr.push_back(temp -> val);
            temp = temp -> next;
        }

        int n = arr.size();
        vector<int> okay;

        for(int i = 0 ; i < n ; i++){
            if(i % 2 == 0){
                okay.push_back(arr[i]);
            }
        }

        for(int i = 0 ; i < n ; i++){
            if(i % 2 != 0){
                okay.push_back(arr[i]);
            }        
        }

        ListNode* newHead = new ListNode(okay[0]);
        ListNode* cur = newHead;

        for(int i = 1 ; i < n ; ++i){
            cur -> next = new ListNode(okay[i]);
            cur = cur -> next;
        }

        return newHead;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/odd-even-linked-list/)