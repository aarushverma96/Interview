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

std::vector<Tree*> v;

bool ancestors(Tree* root, Tree* target)
{
  if(root==NULL)
  {
    return false;
  }

  if(root==target)
  {
    return true;
  }

  if(ancestors(root->left,target) || ancestors(root->right,target))
  {
    v.push_back(root);
    return true;
  }

  return false;
}

void commonAncestors(Tree* root,Tree* n1,Tree* n2)
{
  Tree* lca=LCA(root,n1,n2);
  bool flag = ancestors(root,lca);
}
