
class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
   void helper(Node* root,vector<int>&ans)
{
    if(!root)
    return;

    helper(root->left,ans);
      ans.push_back(root->data);
    helper(root->right,ans);
  
}
//Function to return a list containing the preorder traversal of the tree.
vector <int> inOrder(Node* root)
{
  // Your code here
  //left node right
  vector<int>ans;
  helper(root,ans);
  return ans;
}
};