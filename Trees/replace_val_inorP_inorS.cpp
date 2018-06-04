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

  inO.push_back(root->val);

  inOrder(root->right,inO);
}

void replaceUtil(Tree* root,vector<int> inO,int i)
{
  replaceUtil(root->left,inO,i);
  root->val=inO[i-1]+inO[i+1];
  i++;
  replaceUtil(root->right,inO,i);
}

void replace(Tree* root)
{
  vector<int> inO;
  inO.push_back(0);
  inOrder(root,inO);
  inO.push_back(0);

  replaceUtil(root,inO,1);

}
