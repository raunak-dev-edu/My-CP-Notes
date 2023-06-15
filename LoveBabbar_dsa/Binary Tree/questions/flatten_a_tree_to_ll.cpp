// https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1
/*
->Flatten binary tree to linked list

->approach 1 - traverse saath sath node create krlege but iplace problem
->approach 2 - recurssion -> O(n) spac complexity we need o(1) so we need to use morris traversal //TODO
->approach 3 - morris traversal 

void flatten(Node* root){

    Node* curr = root;
    while(curr!= NULL){
        if(curr -> left){
            Node* pred = curr->left;
            while(pred->right){
                pred = pred->right;
            }
            pred ->right = curr ->right;
            curr ->right = curr ->left;
        }
        curr  = curr ->right;
    }

    //left part NULL
    curr = root;
    while(curr!=NULL){
        curr ->left = NULL;
        curr = curr -> right;
    }
}


*/