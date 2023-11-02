/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    pair<int,int> working(TreeNode* node,int &ct){
        if(node==NULL) return {-1,0};

        pair<int,int> leftsum=working(node->left,ct);
        pair<int,int> rightsum=working(node->right,ct);

        int l=0,r=0;

        if(leftsum.first!=-1) l=leftsum.first;
        if(rightsum.first!=-1) r=rightsum.first;

        int temp=(node->val+l+r)/(leftsum.second+rightsum.second+1);

        if(temp==node->val) ct++;

        return {node->val+l+r,leftsum.second+rightsum.second+1};


    }
    int averageOfSubtree(TreeNode* root) {
        int ct=0;
        working(root,ct);
        return ct;
    }
};