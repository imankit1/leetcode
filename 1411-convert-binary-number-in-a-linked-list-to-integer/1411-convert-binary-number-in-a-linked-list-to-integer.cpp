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
        string s="";
        ListNode* temp=head;
        while(temp!=NULL){
            s+=(to_string(temp->val));
            temp=temp->next;
        }
        int j=s.size()-1;

        int ans=0;
        int i=0;
        while(j>=0){
            ans+=(s[j]-'0')*pow(2, i);
            j--;
            i++;
        }
        return ans;

    }
};