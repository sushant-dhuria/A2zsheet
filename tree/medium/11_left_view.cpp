vector<int> leftView(Node *root)
{
   // Your code here
   queue<Node*>q;
   if(!root)
   return {};
   q.push(root);
   vector<int>ans;
   while(!q.empty())
   {
       int size=q.size();
  
       for(int i=0;i<size;i++){
           Node* front=q.front();
           q.pop();
           if(i==0)
           ans.push_back(front->data);
           if(front->left)
           q.push(front->left);
           if(front->right)
           q.push(front->right);
       }
   }
   return ans;
}