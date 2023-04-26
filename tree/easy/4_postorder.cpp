void helper(Node* root,vector<int>&ans)
{
    if(!root)
    return;

    helper(root->left,ans);
    helper(root->right,ans);
    ans.push_back(root->data);
}
//Function to return a list containing the preorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
  //left right node
  vector<int>ans;
  helper(root,ans);
  return ans;
}