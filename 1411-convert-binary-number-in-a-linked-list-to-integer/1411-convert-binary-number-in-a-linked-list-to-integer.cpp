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
    int getDecimalValue(ListNode* head) {
       int num=head->val;
        ListNode* temp=head;
        while(temp->next!=NULL){
           num=(num*2)+(temp->next->val);
            temp=temp->next;
        }
        return num;
         

    }
};