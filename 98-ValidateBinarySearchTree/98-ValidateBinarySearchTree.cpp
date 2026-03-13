// Last updated: 3/14/2026, 12:51:33 AM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    bool isValidBST(TreeNode* root) {
15        return find(root,LONG_MIN,LONG_MAX)!=-1;
16    }
17    int find(TreeNode* root,long minval,long maxval){
18        if(!root) return 0;
19        int l=find(root->left,minval,root->val);
20        if(l==-1) return -1;
21        int r=find(root->right,root->val,maxval);
22        if(r==-1) return -1;
23        if(root->val<=minval or root->val>=maxval) return -1;
24        return 0;
25    }
26};