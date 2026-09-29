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
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        vector<int> arr;
        while(temp != nullptr){
            arr.push_back(temp -> val);
            temp = temp -> next;
        }
        int Max = 0;
        int n = arr.size();
        
        for(int i = 0 ; i < n / 2 ; i++){
            Max = max(Max, arr[i] + arr[n - i - 1]);
        }
        return Max;
    }
};