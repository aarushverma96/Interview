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

int sizeBinaryTree(Tree* root)
{
  if(root==NULL)
  {
    return 0;
  }
  queue<Tree*> q;
  int count=0;

  q.push(root);

  while(!q.empty())
  {
    Tree* temp = q.front();
    count++;
    q.pop();

    if(temp->left)
    {
      q.push(temp->left);
    }
    if(temp->right)
    {
      q.push(temp->right);
    }
  }
    return count;
}
