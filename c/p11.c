//program to check if two binary trees are the same, given the roots

#include <stdio.h>
//Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
 
int isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(p == NULL && q == NULL){
        return 1;
    }
    if(p->val == q->val){
        return isSameTree(p->left, q->left) || isSameTree(p->right, q->right);
    }
    return 0;
}
