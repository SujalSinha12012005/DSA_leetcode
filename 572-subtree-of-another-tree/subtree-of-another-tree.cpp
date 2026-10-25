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
    bool same(TreeNode* root, TreeNode* subRoot){
        if(root == nullptr && subRoot == nullptr){
            return true ; 
        }
        if(root == nullptr or subRoot == nullptr){
            return false  ; 
        }
        if(root->val != subRoot->val){
            return false ; 
        }

        bool left = same(root -> left , subRoot -> left) ; 
        bool right = same (root -> right , subRoot -> right); 

        if(left == true && right == true){
            return true ; 
        }
        return false ; 
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == nullptr ){ //empty sub tree is also a part of a tree so true 
            return true ; 
        }
        if(root == nullptr){
            return false  ; 
        }
        if(same(root , subRoot)){
            return true ; 
        }

        return isSubtree(root -> left ,subRoot ) || isSubtree(root -> right , subRoot) ; 
    }
};