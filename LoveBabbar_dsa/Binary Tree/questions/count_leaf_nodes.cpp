// https://www.codingninjas.com/codestudio/problems/count-leaf-nodes_893055?source=youtube&campaign=LoveBabbar_Codestudio
/*
->count leaf nodes of given binary tree

//inorder traversal - (LNP)
void inorder(BinaryTreeNode<int> *root, int &count){
    //base case
    if(root == NULL){
        return;
    }
    inorder(root->left,count);
    //leaf node
    if(root->left == NULL && root->right ==NULL){
        count++;
    }
    inorder(root->right,count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    int cnt =0;
    inorder(root,cnt);
    return cnt;
}


*/