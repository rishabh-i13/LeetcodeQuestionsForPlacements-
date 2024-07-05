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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int minDist=INT_MAX;
        int maxDist=INT_MIN;
        ListNode* curr=head;
        int prev_ct=-1,first_ct=-1;
        int idx=0;
        int prevNode=curr->val;
        curr=curr->next;

        while(curr->next!=NULL){
            idx++;
            int currNode=curr->val,nextNode=curr->next->val;
            if((currNode>prevNode and currNode>nextNode) || (currNode<prevNode and currNode<nextNode)){
                if(first_ct==-1){
                    first_ct=idx;
                    prev_ct=idx;
                }
                else{
                    minDist=min(minDist,idx-prev_ct);
                    maxDist=max(maxDist,idx-first_ct);
                    prev_ct=idx;
                }
            }
            prevNode=currNode;
            curr=curr->next;
        }
        if(minDist==INT_MAX) return {-1,-1};
        return {minDist,maxDist};
    }
};