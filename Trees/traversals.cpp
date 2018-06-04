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

std::vector<int> ans;


void preOrder(Tree* root)
{
  if(root=NULL)
  {
    return ;
  }
  Tree* temp=root;

  ans.push_back(temp->val);

  preOrder(temp->left);
  preOrder(temp->right);
}

void inOrder(Tree* root)
{
  if(root=NULL)
  {
    return ;
  }
  Tree* temp=root;


  inOrder(temp->left);
  ans.push_back(temp->val);
  inOrder(temp->right);
}

void postOrder(Tree* root)
{
  if(root=NULL)
  {
    return ;
  }
  Tree* temp=root;


  postOrder(temp->left);
  postOrder(temp->right);
  ans.push_back(temp->val);
}
