#include <bits/stdc++.h>

typedef struct Tree
{
  int val;
  struct Tree* left;
  struct Tree* right;
}Tree;

int main()
{
  return 0;

}

bool isBST(Tree* root,int Min,int Max)
{
  if(root==NULL)
  {
    return true;
  }

  if(root->val<=Min || root->val>=Max)
  {
    return false;
  }

  return isBST(root->left,Min,root->val) && isBST(root->right,root->val,Max); 

}
