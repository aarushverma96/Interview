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

void delete1(Tree* root,int key)
{
  queue<Tree*> q;
  q.push(root);
  Tree* temp=root;
  Tree* keyNode;

  while(!q.empty())
  {
    temp=q.front();
    q.pop();

    if(temp->val==key)
    {
      keyNode=temp;
    }

    if(temp->left)
    {
      q.push(temp->left);
    }
    if(temp->right)
    {
      q.push(temp->right);
    }
  }

  while(!q.empty())
  {
    q.pop();
  }

  q.push(root);
  Tree* temp2;

  while(!q.empty())
  {
    temp2=q.front();
    q.pop();

    if(temp2->left)
    {
      if(temp2->left==temp)
      {
        delete(temp);
        return;
      }
      else
      {
        q.push(temp2->left);
      }
    }

    if(temp2->right)
    {
      if(temp2->right==temp)
      {
        delete(temp);
        return;
      }
      else
      {
        q.push(temp2->right);
      }
    }

  }




}
