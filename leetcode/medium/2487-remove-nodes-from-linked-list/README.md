# Remove Nodes From Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the `head` of a linked list.

Remove every node which has a node with a greater value anywhere to the right side of it.

Return  *the* `head` *of the modified linked list.* 

 

 **Example 1:** 

```
Input: head = [5,2,13,3,8]
Output: [13,8]
Explanation: The nodes that should be removed are 5, 2 and 3.
- Node 13 is to the right of node 5.
- Node 13 is to the right of node 2.
- Node 8 is to the right of node 3.

```

 **Example 2:** 

```
Input: head = [1,1,1,1]
Output: [1,1,1,1]
Explanation: Every node has value 1, so no nodes are removed.

```

 

 **Constraints:** 

- The number of the nodes in the given list is in the range [1, 105].
- 1 <= Node.val <= 105

## Solution

**Language:** C++  
**Runtime:** 47 ms (beats 6.65%)  
**Memory:** 198.9 MB (beats 5.93%)  
**Submitted:** 2026-09-18T04:48:20.318Z  

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
    ListNode* removeNodes(ListNode* head) {
        if(!head) return nullptr;

        vector<int> arr;
        ListNode* temp = head;
        
        while(temp != nullptr){
            arr.push_back(temp -> val);
            temp = temp -> next;
        }

        int n = arr.size();
        stack<int> st;

        for(int i = 0 ; i < n ; i++){

            while(!st.empty() && st.top() < arr[i]){
                st.pop();
            }
            st.push(arr[i]);
        }

        vector<int> ans;

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        ListNode* newHead = nullptr;
        ListNode* tail = nullptr;

        for(int x : ans){
            ListNode* node = new ListNode(x);

            if(!newHead) newHead = tail = node;
            else{
                tail -> next = node;
                tail = node;
            }
        }
        
        return newHead;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/remove-nodes-from-linked-list/)