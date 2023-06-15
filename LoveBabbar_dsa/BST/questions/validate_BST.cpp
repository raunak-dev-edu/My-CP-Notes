// https://www.codingninjas.com/codestudio/problems/validate-bst_799483?leftPanelTab=0
/*
->validate Binary search tree

->approach 1 - inorder traversal - check sorted or not ( TC - O(n))

->approach 2 - recurssive -,

bool isBST(BinaryTreeNode<int>* root, int min, int max){
    //base case
    if(root == NULL){
        return true;
    }
    if(root->data >=min && root->data <= max){
        bool left = isBST(root->left, min, root->data);
        bool right = isBST(root->right, root->data, max);
        return left && right;
    }
    else{
        return false;
    }
}

bool validateBST(BinaryTreeNode<int> *root) {
    return isBST(root, INT_MIN, INT_MAX);
}

TC- O(n)
SC = O(H)

*/