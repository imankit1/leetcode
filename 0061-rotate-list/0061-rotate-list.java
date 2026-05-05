/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if(head==null) return head;
        int cnt=0;
        ListNode temp=head;
        while(temp!=null){
            cnt++;
            temp=temp.next;
        }
        if(k==0) return head;
        k=k%cnt;
        if(k==0) return head;
        int r=cnt-k;
        temp=head;
        cnt=0;
        ListNode dummy=null;
        ListNode fast=dummy;
        while(temp!=null){
            cnt++;
            if(cnt==r){
                dummy=temp.next;
                fast=temp.next;
                temp.next=null;
                break;
            }
            temp=temp.next;
        }
        while(dummy.next!=null){
            dummy=dummy.next;
        }
        dummy.next=head;
        return fast;

    }
}