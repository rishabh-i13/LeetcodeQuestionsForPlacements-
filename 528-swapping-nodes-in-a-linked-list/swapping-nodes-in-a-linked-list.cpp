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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr=head;
        int n=0;
        while(curr!=NULL){
            n++;
            curr=curr->next;
        }
        int j=n-k+1;
        ListNode* kthFromFront=NULL;
        ListNode* kthFromEnd=NULL;
        ListNode* temp=head;
        int i=1;
        while(temp!=NULL){
            if(i==k){
                kthFromFront=temp;
            }
            else if(i==j){
                kthFromEnd=temp;
            }
            i++;
            temp=temp->next;
        }
        if (kthFromFront && kthFromEnd) {
            swap(kthFromFront->val, kthFromEnd->val);
        }
        return head;
    }
};