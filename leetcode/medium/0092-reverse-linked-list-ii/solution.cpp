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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head) return nullptr;

        ListNode* temp = head;
        vector<int> arr;

        while(temp != nullptr){
            arr.push_back(temp -> val);
            temp = temp -> next;
        }

        reverse(arr.begin() + (left - 1), arr.begin() + right);

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        for(int i = 0 ; i < arr.size() ; i++){
            curr -> next = new ListNode(arr[i]);
            curr = curr -> next;
        }

        return dummy -> next;
    }
};