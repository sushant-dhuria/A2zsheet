void helper(Node* root,vector<int>&ans)
{
    if(!root)
    return;
    ans.push_back(root->data);
    helper(root->left,ans);
    helper(root->right,ans);
}
//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  // Your code here
  //node left right
  vector<int>ans;
  helper(root,ans);
  return ans;
}