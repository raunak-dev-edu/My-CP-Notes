// https://www.codingninjas.com/codestudio/problems/search-in-bst_1402878
/*
->Search Node in BST
TC - O(n)
-> approach 1 = using recursion but it gives TLE

bool searchInBST(BinaryTreeNode<int> *root, int x){
    //base case
    if(root == NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }
    if(root->data > x){
        //left part me
        return searchInBST(root->left, x);
    }
    else{
        //right part me
        return searchInBST(root->right,x);
    }
}

->approach 2 = iteration

bool searchInBST(BinaryTreeNode<int> *root, int x){

    BinaryTreeNode<int> *temp = root;

    while(temp!=NULL){
        if(temp ->data == x){
            return true;
        }
        if(temp ->data >x){
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }
    return false;
}


*/