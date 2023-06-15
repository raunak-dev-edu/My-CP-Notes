// https://www.codingninjas.com/codestudio/problems/_893049?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0
/*
->Find the precedessor and successor of the given node in the BST

pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key){

    //find key
    BinaryTreeNode<int>* temp =  root;
    int pred =-1;
    int succ =-1;

    while(temp ->data != key){

        if(temp->data > key){
            succ = temp ->data;
            temp = temp -> left;
        }
        else{
            pred = temp -> data;
            temp = temp-> right;
        }
    }
    //pred nd succ

    //pred
    BinaryTreeNode<int>* leftTree = temp->left;
    while(leftTree != NULL){
        pred = leftTree->data;
        leftTree = leftTree->right;
    }

    //succ
    BinaryTreeNode<int>* rightTree = temp->right;
    while(rightTree!=NULL){
        succ = rightTree->data;
        rightTree = rightTree->left;
    }

    pair<int, int> ans = make_pair(pred,succ);
    return ans;
}

TC - O(n)
SC - O(1)

*/