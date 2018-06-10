//Maximum difference between node and its ancestor in Binary Tree
#include<bits/stdc++.h>

using namespace std;

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

int maxDiffUtil(Tree* root,int* res)
{
  if(root==NULL)
  {
    return INT_MAX;
  }

  if(root->left==NULL && root->right==NULL)
  {
    return root->val;
  }

  int val=min(maxDiffUtil(root->left,res),maxDiffUtil(root->right,res));

  *res = max(val,root->val);

  return min(root->val,val);
}


int maxDiff(Tree* root)
{
  int res=INT_MIN;

  maxDiffUtil(root,&res);

  return res;
}
