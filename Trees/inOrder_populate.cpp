#include <bits/stdc++.h>

using namespace std;

typedef struct Tree
{
  int val;
  struct Tree* left;
  struct Tree* right;
  struct Tree* next;
}Tree;

int main()
{
  return 0;
}

Tree* prev;

void populate(Tree* root)
{
  prev=NULL;

  if(root)
  {
    populate(root->right);
    root->next=prev;
    prev=root;
    populate(root->left);
  }

}
