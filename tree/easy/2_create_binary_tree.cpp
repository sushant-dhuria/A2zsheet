    void create_tree(node* root0, vector<int> &vec){
        //Your code goes here
        queue<node*>q;
        q.push(root0);
        int i=1;
        while(i<vec.size()){
            node* root=q.front();
            q.pop();
            
            node* left=newNode(vec[i]);
            root->left=left;
            i++;
            q.push(left);
            node* right=newNode(vec[i]);
            root->right=right;
            i++;
            q.push(right);
        }
    }