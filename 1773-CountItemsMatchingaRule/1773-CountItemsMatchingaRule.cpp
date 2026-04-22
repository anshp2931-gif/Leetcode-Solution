// Last updated: 22/04/2026, 21:28:51
1class Solution {
2public:
3    bool checkTree(TreeNode* root) {
4       int leftValue =root->left->val;
5       int rightValue =root->right->val;
6       int rootValue = root->val;
7
8
9       if(leftValue +rightValue == rootValue){
10        return true;
11       }
12       return false;
13    }
14};