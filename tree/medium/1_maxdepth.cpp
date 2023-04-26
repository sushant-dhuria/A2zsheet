class Solution {
public:

    int maxDepth(TreeNode* root) {
         int maxDepthLeft=0,maxDepthRight=0;
         if(!root)
         {
             return 0;
         }
        if(root->left)
  maxDepthLeft = maxDepth(root->left);
         if(root->right)
 maxDepthRight = maxDepth(root->right);
return max(maxDepthLeft, maxDepthRight) + 1;
    }
};