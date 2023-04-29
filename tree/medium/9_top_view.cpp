class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.

    vector<int> topView(Node *root)
    {
        //Your code here
                vector<int>ans;
        queue<pair<Node*,int>>q;
        map<int,vector<int>>m;
           if(root==NULL)
            return ans;
        q.push({root,0});
        while(!q.empty())
        {
            pair<Node*,int>p=q.front();
            q.pop();
            Node* node=p.first;
            int level=p.second;
            m[level].push_back(node->data);
                if(node->left)
                {
                    q.push({node->left,level-1});
                }
                if(node->right)
                {
                    q.push({node->right,level+1});
                }
        }
    
        for(auto it:m)
        {
                ans.push_back(it.second[0]);
        }
        
        return ans;

    }

};