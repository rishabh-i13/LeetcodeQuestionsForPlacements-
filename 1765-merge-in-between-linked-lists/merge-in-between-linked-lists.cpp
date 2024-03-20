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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* x=list1;
        ListNode* y=list1;
        int counta=0;
        int countb=0;
        ListNode *m=list2;
        ListNode *n=list2;
        while(n->next!=NULL){
            n=n->next;
        }
        while(countb<b){
            y=y->next;
            countb++;
        }
        n->next=y->next;
        while(counta<a-1){
            x=x->next;
            counta++;
        }
        x->next=m;
        return list1;
    }
};