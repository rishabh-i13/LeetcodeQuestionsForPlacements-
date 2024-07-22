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
    ListNode* rotateRight(ListNode* head, int k) {
       if(k==0 or head==NULL or head->next==NULL) return head;

       int size=1;
       ListNode *temp=head;
       while(temp->next){
           size++;
           temp=temp->next;
       }

       k=k%size;
       int t=size-k;
       temp->next=head;

       while(t--) temp=temp->next;

       head=temp->next;
       temp->next=NULL;
       return head;
       
    }
};