//700. Search in a Binary Search Tree

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
        
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL)
            return root;
        else if(root->val == val)
            return root;
        
            return val<root->val ? searchBST(root->left, val):searchBST(root->right,val);
    }
};

//doesn't work
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
        
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL)
            return root;
        else if(root->val == val)
            return root;
        
            return searchBST(root->left, val) || searchBST(root->right,val);
    }
};