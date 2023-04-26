class Solution {
  public:

    //Function to return maximum path sum from any node in a tree.
    int helper(Node* root,int &ans)
    {
        if(!root)
        return 0;
        
        int left=max(0,helper(root->left,ans));
        int right=max(0,helper(root->right,ans));
        
        ans=max(left+right+root->data,ans);
        
        return root->data+max(left,right)
    }
    int findMaxSum(Node* root)
    {
        // Your code goes here
        int ans=INT_MIN;
        helper(root,ans);
        return ans;
  
    }
};