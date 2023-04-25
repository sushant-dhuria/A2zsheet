 void helper(Node* root,vector<vector<int>>&ans,vector<int>&path)
 {
     if(!root){
     return;
     }     
     path.push_back(root->data);
     if(!root->left && !root->right)
      ans.push_back(path);
     helper(root->left,ans,path);

     helper(root->right,ans,path);
       path.pop_back();
 }
vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<vector<int>>ans;
    vector<int>path;
    helper(root,ans,path);
    return ans;
}