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
    void working(TreeNode* root,int &sum){
        if(root==NULL) return;

        working(root->right,sum); // right is covered
        sum+=root->val;

        root->val=sum;

        working(root->left,sum); // left is covered

    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum =0;
        working(root,sum);
        return root;
    }
};