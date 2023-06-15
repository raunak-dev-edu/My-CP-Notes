// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
/*
->height of tree

int height(struct Node* node){
    //base case
    if(node == NULL){
        return 0;
    }

    int left = height(node -> left);
    int right = height(node ->right);

    int ans  = max(left, right)+1;
    return ans;
}


*/