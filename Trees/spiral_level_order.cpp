#include <bits/stdc++.h>

using namespace std;

typedef struct Tree
{
  int val;
  struct Tree* left;
  struct Tree* right;
}Tree;


void spiral(Tree* root)
{
  stack<Tree*> s1;
  stack<Tree*> s2;

  s1.push(root);

  while(!s1.empty() || !s2.empty())
  {
    while(!s1.empty())
    {
      Tree* temp=s1.top();
      s1.pop();
      if(temp->right)
      {
        s2.push(temp->right);
      }
      if(temp->left)
      {
        s2.push(temp->left);
      }
    }


    while(!s2.empty())
    {
      Tree* temp=s2.top();
      s1.pop();
      if(temp->left)
      {
        s2.push(temp->left);
      }
      if(temp->right)
      {
        s2.push(temp->right);
      }
    }


  }
}


int main()
{
  return 0;
}
