#include <bits/stdc++.h>

using namespace std;

typedef struct Tree
{
  int val;
  struct Tree* left;
  struct Tree* right;
}Tree;


vector<Tree*> allTrees(int arr[],int start,int end)
{
  vector<Tree*> trees;
  if(start>end)
  {
    trees.push_back(NULL);
    return trees;
  }

  for (int i = start; i <= end; i++)
  {
    std::vector<Tree*> leftTrees=allTrees(arr,start,i-1);
    std::vector<Tree*> rightTrees=allTrees(arr,i+1,end);

    for (int j = 0; j < leftTrees.size(); j++)
    {
      for (int k = 0; k < rightTrees.size(); k++)
      {
        Tree* root = new Tree;
        root->left = leftTrees[j];
        root->right = rightTrees[k];
        root->val=arr[i];

        trees.push_back(root);

      }
    }
  }

}

int main()
{
  int arr[]={4,5,7};
  std::vector<Tree*> v=allTrees(arr,0,2);
  return 0;
}
