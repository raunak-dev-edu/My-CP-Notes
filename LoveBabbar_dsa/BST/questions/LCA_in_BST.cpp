// codingninjas.com/codestudio/problems/lca-in-a-bst_981280?leftPanelTab=0
/*
->Lowest common ancestor(LCA) of two nodes in BST

->approach 1 - using recursion - TC - O(n) and SC - O(n) (this is not clear might be O(1))
TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
    //base case
    if(root == NULL){
        return NULL;
    }
    if(root->data < P->data && root->data < Q->data){
        return LCAinaBST(root->right, P,Q);
    }
    if(root->data > P->data && root->data > Q->data){
        return LCAinaBST(root->left, P,Q);
    }
    return root;
}

->approach 2 - using while loop - TC - O(n) and SC - O(n)

TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
    while(root!= NULL){
        if(root->data < P->data && root->data < Q->data){
            root= root->right;
        }
        else if(root->data > P->data && root->data > Q->data){
            root = root->left;
        }
        else{
            return root;
        }
    }
}



*/