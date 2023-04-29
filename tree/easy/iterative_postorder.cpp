vector <int> postOrder(Node* root)
{
  // Your code here
  //left right node
  vector<int>ans;
  stack<Node*>st1,st2;
  st1.push(root);
  while(!st1.empty())
  {
      Node* top=st1.top();
      st1.pop();
      st2.push(top);
      if(top->left){
          st1.push(top->left);
      }
      if(top->right)
      {
          st1.push(top->right);
      }
  }
  while(!st2.empty())
  {
      Node* top=st2.top();
      st2.pop();
      ans.push_back(top->data);
  }
  return ans;
}