#include <bits/stdc++.h>

using namespace std;



typedef struct Tree
{
  int val;
  struct Tree* left;
  struct Tree* right;
}Tree;

void level(Tree* root)
{
  queue<Tree*> q;

  q.push(root);

  while(!q.empty())
  {
    Tree* temp=q.front();
    q.pop();
    if(temp==NULL)
    {
      cout << endl;
      continue;
    }
    cout << temp->val << " ";
    q.push(NULL);

    if(temp->left)
    {
      q.push(temp->left);
    }
    if(temp->right)
    {
      q.push(temp->right);
    }

  }

}

int main()
{
  return 0;
}
