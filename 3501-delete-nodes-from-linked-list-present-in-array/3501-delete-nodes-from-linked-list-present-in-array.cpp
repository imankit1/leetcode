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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>mpp;
        for(auto i: nums) mpp[i]++;
        ListNode* temp=head;

        ListNode* dummy=new ListNode(-1);
        ListNode* flag=dummy;
        while(temp!=NULL){
            if(mpp.find(temp->val)==mpp.end()){
                 flag->next=temp;
                 flag=flag->next;
            }
            temp=temp->next;
        }
        flag->next=NULL;
        return dummy->next;
    }
};