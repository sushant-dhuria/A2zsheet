class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
bool solve(Node* r1, Node* r2){
        
        if(r1 == NULL && r2 == NULL)
            return true;
        if(r1 == NULL || r2 == NULL)
            return false;
        if(r1->data != r2->data)
            return false;
        
        return solve(r1->left, r2->right)  &&  solve(r1->right, r2->left);
    }
    
    bool isSymmetric(struct Node* root)
    {
        if(root == NULL)
            return true;
            
        return solve(root->left, root->right);
	    // Code here
    }
};