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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        vector<int> v;

        ListNode* node=head;
        while(node->next!=NULL){
            int a=node->val;
            int b=node->next->val;
            v.push_back(__gcd(a,b));
            node=node->next;
        }
        ListNode* newhead=head;
        for(int i=0;i<v.size();i++){
            ListNode* temp= new ListNode(v[i]);
            ListNode* nextnode=newhead->next;
            newhead->next=temp;
            temp->next=nextnode;
            newhead=nextnode;  
        }

        return head;

    }
};