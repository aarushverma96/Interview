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

void reverseLevelorder(Tree* root)
{
  queue<Tree*> q;
  stack<Tree*> s;

  q.push(root);

  while(!q.empty())
  {
    Tree* temp=q.front();
    q.pop();

    s.push(temp);

    if(temp->right)
    {
      q.push(temp->right);
    }

        if(temp->left)
        {
          q.push(temp->left);
        }

  }

  while(!s.empty())
  {
    Tree* temp=s.top();
    s.pop();

    cout << temp->val;
  }

}
