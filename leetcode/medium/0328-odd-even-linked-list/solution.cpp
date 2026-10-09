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