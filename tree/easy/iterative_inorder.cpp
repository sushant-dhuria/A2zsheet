vector <int> inOrder(Node* root)
{
  // Your code here
  //left node right
  vector<int>ans;
  stack<Node*>st;
  Node* curr=root;
  
  while(true){
      if(curr)
      {
          st.push(curr);
          curr=curr->left;
      }
      else{
          if(st.empty())
          {
              break;
          }
          curr=st.top();
          st.pop();
          ans.push_back(curr->data);
          curr=curr->right;
      }
  }
  
  return ans;
}