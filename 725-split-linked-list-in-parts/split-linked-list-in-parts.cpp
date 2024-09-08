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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        if(k==1) return {head};
        ListNode* node1=head;
        int n=0;
        while(node1!=NULL){
            node1=node1->next;
            n++;
        }
        vector<ListNode*> ans(k,NULL);
        int x=n/k;
        int r=n%k;
        ListNode* node=head;
        ListNode* prev=NULL;
        for(int i=0;i<k and node!=NULL;i++){
            ans[i]=node;
            for(int j=0;j<x+(r>0);j++){
                prev=node;
                node=node->next;
            }
            r--;
            prev->next=NULL;
        }
        return ans;
    }
};