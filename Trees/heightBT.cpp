#include <bits/stdc++.h>

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

int height(Tree* root)
{
  if(root==NULL)
  {
    return 0;
  }

  return 1+max(height(root->left),height(root->right));
}
