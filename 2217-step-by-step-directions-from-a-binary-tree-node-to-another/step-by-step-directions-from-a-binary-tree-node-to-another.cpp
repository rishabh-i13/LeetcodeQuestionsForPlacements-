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
    //function to find LCA( lowest common ancsestor) of two nodes
    TreeNode* lowestCommonAncestor(TreeNode* root, int p, int q) {
        //base case
        if(root==NULL || p==root->val || q==root->val) return root;

        TreeNode* leftside=lowestCommonAncestor(root->left,p,q);
        TreeNode* rightside=lowestCommonAncestor(root->right,p,q);

        if(leftside==NULL) return rightside;
        else if(rightside==NULL) return leftside;
        else return root;
    }

    bool findDir(TreeNode* LCA,int target,string& dir){
        if(LCA==NULL) return false;
        if(LCA->val==target) return true;
        //traverse left
        dir.push_back('L');
        if(findDir(LCA->left,target,dir)==true) return true;
        dir.pop_back();
        //traverse right
        dir.push_back('R');
        if(findDir(LCA->right,target,dir)==true) return true;
        dir.pop_back();

        return false;
    }

    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* LCA=lowestCommonAncestor(root,startValue,destValue);

        string LCA_to_startVal="";
        string LCA_to_destVal="";

        findDir(LCA,startValue,LCA_to_startVal);
        findDir(LCA,destValue,LCA_to_destVal);
        string ans="";

        int i=0;
        while(i<LCA_to_startVal.size()){
            ans+='U';
            i++;
        }
        ans+=LCA_to_destVal;
        return ans;
    }
};