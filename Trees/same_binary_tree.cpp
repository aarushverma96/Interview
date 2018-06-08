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

bool sameTree(Tree* root1,Tree* root2)
{
  if(root1==NULL && root2==NULL)
  {
    return true;
  }
  if(root1==NULL || root2==NULL)
  {
    return false;
  }

  return root1->val==root2->val && sameTree(root1->left,root2->left) && sameTree(root1->right,root2->right);
}
