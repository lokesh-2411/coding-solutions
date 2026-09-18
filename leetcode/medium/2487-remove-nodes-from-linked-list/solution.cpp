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