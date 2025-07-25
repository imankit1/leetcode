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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* head=new ListNode(-1);
        ListNode* temp3=head;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<=temp2->val){
                if(head==NULL){
                    head=temp1;
                    // temp3=temp3->next;
                }
                else{
                    temp3->next=temp1;
                    temp3=temp1;
                }
                temp1=temp1->next;
            }
            else{
                  if(head==NULL){
                    head=temp2;
                    // temp3=temp3->next;
                }
                else{
                    temp3->next=temp2;
                    temp3=temp2;
                }
                temp2=temp2->next;
            }
        }
        while(temp1!=NULL){
            temp3->next=temp1;
            temp3=temp1;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            temp3->next=temp2;
            temp3=temp2;
            temp2=temp2->next;
        }

        return head->next;
    }
};