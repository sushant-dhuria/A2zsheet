vector<int> findSpiral(Node *root)
{
    //Your code here
        if(!root) return {};
        vector<int> ans;
       queue<Node*> q;
       q.push(root);
       int flag = 1;
       int size = q.size();
       while(!q.empty()){               //bfs approach
           vector<int> level;
           for(int i=0 ; i<size ; i++){
               Node* node = q.front();
               q.pop();
               level.push_back(node->data);
               if(node->left) q.push(node->left);
               if(node->right) q.push(node->right);
           }
           size = q.size();
           if(flag){
                reverse(level.begin(), level.end());
                flag = 0;
           }
            else flag = 1;
            for(int num: level) ans.push_back(num);
        }
        return ans;
}