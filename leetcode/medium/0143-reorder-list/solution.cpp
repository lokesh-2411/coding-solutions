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