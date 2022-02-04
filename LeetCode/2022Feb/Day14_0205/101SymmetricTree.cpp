

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
//
class Solution {

public:
    bool isMirror(TreeNode* t1, TreeNode* t2) {
    if (t1 == NULL && t2 == NULL ) 
        return true;
    if (t1 == NULL || t2 == NULL) 
        return false;
    return (t1->val == t2->val) && (isMirror(t1->right, t2->left) && isMirror(t1->left, t2->right));
    }
    bool isSymmetric(TreeNode* root) {
        
       return isMirror(root, root);
            
    }
};
//This is not a good method for [1,2,2,2,null,2]
/*
    This idea is to use Inorder traversal firstly.
    Store the result of traversal into a list.
    Using the list to check.
    First of all, check the total number of list
    Comparing from the left side from the right side 
    [bias:the mid of number] 
*/
class Solution {

public:
    void recursive(TreeNode* root, vector<int> &arr){
        if(root){
            recursive(root->left,arr);
            arr.push_back(root->val);
            recursive(root->right,arr);
        }
    }
    bool isSymmetric(TreeNode* root) {
        
       //store them in list
        vector<int> arr;
        recursive(root, arr);
        //Check it is symmetric
        if(arr.size()%2==0)
            return false;
        else{
            int mid=arr.size()/2;
            for(int i=0;i<mid;i++){
                if(arr[i]!=arr[(arr.size()-1)-i])
                    return false;
            }
        }
        return true;
            
    }
};