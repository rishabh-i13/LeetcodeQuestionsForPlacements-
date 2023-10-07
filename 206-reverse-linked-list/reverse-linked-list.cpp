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
    //Recursive solution
    // ListNode* reverseList(ListNode* head) {
    //     if(head==NULL or head->next==NULL){
    //         return head;
    //     }
    // ListNode* rerhead=reverseList(head->next);
    // head->next->next=head;
    // head->next=NULL;
    // return rerhead;
    // }

    //iterative solution

    ListNode* reverseList(ListNode* head){
        ListNode* temp=NULL;

        while(head!=NULL){
            ListNode* nextofhead=head->next;
            head->next=temp;
            temp=head;
            head=nextofhead;
        }
        return temp;
    }
};