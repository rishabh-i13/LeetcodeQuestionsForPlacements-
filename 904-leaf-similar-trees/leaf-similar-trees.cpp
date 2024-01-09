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
    void working(TreeNode* node,vector<int> &v){
        if(node==NULL) return;
        if(node->left==NULL and node->right==NULL){
            v.push_back(node->val);
            return;
        }
        working(node->left,v);
        working(node->right,v);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> first;
        vector<int> second;
        working(root1,first);
        working(root2,second);

        return first==second;
    }
};