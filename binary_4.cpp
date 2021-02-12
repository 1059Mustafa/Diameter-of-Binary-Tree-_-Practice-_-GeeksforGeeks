int height(Node* root)
{
    if(!root)
    {
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}

int diameter(Node* root) 
{
    if(!root)
    {
        return 0;
    }
    int left_subtree=height(root->left);
    int right_subtree=height(root->right);
    
    int left_diameter=diameter(root->left);
    int right_diameter=diameter(root->right);
    
    return max(left_subtree+right_subtree+1,max(left_diameter,right_diameter));
    
    
    
}
