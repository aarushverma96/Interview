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

void modifyLevel(Tree* root)
{
  if(root=NULL)
  {
    return;
  }

  queue<Tree*> q;
  stack<Tree*> s;

  int cl=0;
  int sz;

  q.push(root);
  Tree* temp;
  bool right=false;

  while(!q.empty())
  {
    cl++;
    sz=q.size();

    q.pop();

    for (int i = 0; i < sz; i++)
    {
      temp=q.front();
      q.pop();

      if (!right)
      {
        cout << temp->val;
      }
      else
      {
        s.push(temp);
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

    if(right)
    {
      while(!s.empty())
      {
        temp=s.top();
        s.pop();
        cout << temp->val;
      }
    }

    if(cl==2)
    {
      right=true;
      cl=0;
    }

    cout << endl;

  }
}
