vector <int> preorder(Node* root)
{
  // Your code here
  //node left right
  vector<int>ans;
  stack<Node*>st;
  st.push(root);
  Node* curr=root;
  while(!st.empty())
  {
    Node* top=st.top();
    st.pop();
    ans.push_back(top->data);
       if(top->right)
      st.push(top->right);
      if(top->left)
      st.push(top->left);
  }
  return ans;
}