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
 void depth(TreeNode* root, unordered_map<int, int>&mp, int& maxii, int d){
        if(root==NULL) return;

        maxii=max(maxii, d);
        mp[root->val]=d;
        depth(root->left, mp, maxii, d+1);
        depth(root->right, mp, maxii, d+1);
    }
    TreeNode* LCA (TreeNode* root, unordered_map<int, int>&mp, int d ){
        if(root==NULL) return NULL;
        if(mp[root->val]==d) return root;

        TreeNode* l= LCA(root->left, mp, d);
        TreeNode* r=LCA(root->right, mp, d);

        if(l!=NULL && r!=NULL) return root;

         return l!=NULL ? l: r;
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        unordered_map<int, int>mp;
        int maxii=0;
        depth( root, mp, maxii, 0);
        return LCA(root, mp, maxii);
    }
};