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

void inOrder(Tree* root,vector<int>& inO)
{
  if(root=NULL)
  {
    return ;
  }
  inOrder(root->left,inO);

  inO.push_back(temp->val);

  inOrder(root->right,inO);
}

void replace(Tree* root)
{
  vector<int> inO;
  inO.push_back(0);
  inOrder(root,inO);
  inO.push_back(0);

  repalceUtil()


}
