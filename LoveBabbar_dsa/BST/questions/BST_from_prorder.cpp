// https://www.codingninjas.com/codestudio/problems/preorder-traversal-to-bst_893111?leftPanelTab=0
/*
->Preorder traversal of a BST

->approach 1 - check each node in while loop and pass it to left and right ( TC - O(n^2))
->approach 2 - convert prorder to inorder and make bst from inorder ( TC - O(nlogn))
->approach 3 - checking node in a range (TC - O(n))

BinaryTreeNode<int>* solve(vector<int> &preorder, int mini, int maxi, int &i){
    if(i>= preorder.size()){
        return NULL;
    }
    if(preorder[i] < mini || preorder[i]>maxi){
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[i++]);
    root->left = solve(preorder, mini, root->data,i);
    root->right = solve (preorder, root->data,  maxi, i);
    return root;
}
BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {

    int mini = INT_MIN;
    int maxi = INT_MAX;
    int i=0;
    return solve(preorder, mini,maxi,i);

}




*/