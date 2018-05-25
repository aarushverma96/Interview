/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };cd
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) 
{

	vector<vector<int> > res;
	vector<int> temp;	
	queue<int> level;
	queue<TreeNode> q;
	TreeNode* head=A;


	if(A==NULL)
	{
		return res;
	}

	q.push(head);
	level.push(0);

	while(!q.empty())
	{
		TreeNode* current=q.front();
		int l=level.front();

		if(res[l].size()!=l+1)
		{
			res.push_back(temp);
		}

		res[l].push_back(current->value);

		if(current->left!=NULL)
		{
			lef=current->left;
			q.push(lef);
			level.push(l+1);
			
		}

		if(current->right!=NULL)
		{
			rig=current->right;
			q.push(rig);
			level.push(l+1);	
		}

		q.pop();
		level.pop()

	}

	return res;
}	
