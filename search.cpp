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
    TreeNode *temp=NULL;
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            return temp;
        }
        preorder(root,val);
        return temp;
    }
    void preorder(TreeNode *root,int val)
    {
        if(root!=NULL)
        {
            if(root->val==val)
            {
                temp=root;
            }
            preorder(root->left,val);
            preorder(root->right,val);
        }
    }
};
