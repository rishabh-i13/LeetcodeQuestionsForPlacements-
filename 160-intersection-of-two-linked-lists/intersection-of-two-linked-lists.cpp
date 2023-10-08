/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    //     ListNode* ans=NULL;

    //     set<ListNode*> st;
    //     ListNode* a=headA;
    //     while(a!=NULL){
    //         st.insert(a);
    //         a=a->next;
    //     }
    //     ListNode* b=headB;
    //     while(b!=NULL and st.find(b)==st.end()){
    //         b=b->next;
    //     }
    //     ans=b;
    //     return ans;
    // }
                        //BETTER APPROACH

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
        if(headA==NULL || headB==NULL ) return NULL;
        //two dummy nodes
        ListNode* x=headA;
        ListNode* y=headB;

        //intersection point// incase no intertection x==y will true when both will be NULL by this methd
        while(x!=y){
            if(x==NULL) x=headB;
            else x=x->next;
            if(y==NULL) y=headA;
            else y=y->next;
        }
        return x;
    }
};