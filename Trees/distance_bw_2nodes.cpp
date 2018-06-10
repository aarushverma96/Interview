#include <bits/stdc++.h>

int main()
{
  return 0;
}

typedef struct Tree
{
  int val;
  struct Tree* left;
  struct Tree* right;
}Tree;

int findLevel(Tree* root, int key,int level) //subroutine to find level of a node
{
  if(root==NULL)
  {
    return 0;
  }

  if(root->val==key)
  {
    return level;
  }

  int llevel=findLevel(root->left,key,level+1);
  if(llevel!=0)
  {
    return llevel;
  }

  llevel=findLevel(root->right,key,level+1);
  return llevel;
}

Tree* LCA(Tree* root,Tree* n1,Tree* n2)
{
  if(root==NULL)//no Tree
  {
    return NULL;
  }

  if(root==n1 || root==n2)
  {
    return root;
  }

  Tree* left=LCA(root->left,n1,n2);
  Tree* right=LCA(root->right,n1,n2);

  if(left==NULL)
  {
    return right;
  }
  if(right==NULL)
  {
    return left;
  }

  return root;
}

int findDistance(Tree* root,Tree* n1,Tree* n2)
{
  Tree* lca=LCA(root,n1,n2);
  return findLevel(lca,n1->val,0)+findLevel(lca,n2->val,0);
}
