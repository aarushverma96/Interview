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

bool isRootLeafSum(Tree* root,int sum)
{
  if(root==NULL)
  {
    return false;
  }


  if(root->left==NULL && root->right==NULL)
  {
    if(root->val==sum)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  bool left=isRootLeafSum(root->left,sum-root->val);
  bool right=isRootLeafSum(root->right,sum-root->val);

  if(left)
  {
    return true;
  }
  if(right)
  {
    return true;
  }

  return false;

}
