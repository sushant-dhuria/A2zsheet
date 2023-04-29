/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
int maxi=0;
if(!root)
return 0;
q.push({root,0});
while(!q.empty())
{
    int size=q.size();
    int first,last;
    int mmin=q.front().second;
    for(int i=0;i<size;i++)
    {
          int curr=(q.front().second) - mmin;
    TreeNode* front=q.front().first;
    q.pop();
        if(i==0)
        first=curr;
        if(i==size-1)
        last=curr;

        if(front->left)
        q.push({front->left,(long long)curr*2+1});
        if(front->right)
        q.push({front->right,(long long)curr*2+2});
    }
    
    maxi=max(maxi,last-first+1);
}
return maxi;

    }
};