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

void specificLevel(Tree* root)
{
  //base case

  if(root==NULL)
  {
    return;
  }

  queue<Tree*> q;

  cout << root->val;

  if(root->left)
  {
    cout << root->left->val;
    cout << root->right->val;
  }

  if(root->left->left)
  {
    q.push(root->left);
    q.push(root->right);
  }

  while(!q.empty())
  {
    Tree* first=q.front();
    q.pop();
    Tree* second=q.front();
    q.pop();

    cout << first->left->val << second->right->val;
    cout << first->right->val << second->left->val;

    if(first->left->left)
    {
      q.push(first->left);
      q.push(second->right);
      q.push(first->right);
      q.push(second->left);
    }

  }




}
