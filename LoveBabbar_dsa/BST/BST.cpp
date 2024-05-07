/*
->Binary Search tree - in this tree all the nodes left to rooot will be smaller  than root and in right all will be greater than root. it applies to all node.
example -
     8
    / \
   3   10
  / \    \ 
 1   6   14
    / \   /
   4   7 13

TC - O(logn)

*/

//insertion -
// TC -O(n )
// Inorder of BST is sorted - useful for finding min and max
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* insertIntoBST(Node* &root, int d){
    ///base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root -> data){
        //right part me insert karna h
        root->right = insertIntoBST(root->right,d);
    }
    else{
        //left part me insert karna h 
        root->left = insertIntoBST(root->left,d);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

//using this traversal to see outut. we can also use other traversal
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            //purana level complete traverse ho chuka hai
            cout<<endl;
            if(!q.empty()){
                //queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<<temp-> data <<" ";
            if(temp -> left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

//min value
Node* minVal(Node* root){
    Node* temp = root;

    while(temp ->left != NULL){
        temp = temp->left;
    }
    return temp;
}
//max value
Node* maxVal(Node* root){
    Node* temp = root;

    while(temp ->right != NULL){
        temp = temp->right;
    }
    return temp;
}

//delete a node
Node* deleteFromBST(Node* root, int val){
    //base case
    if(root== NULL){
        return root;
    }
    if(root->data == val){
        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //1 child

        //left child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
        }
    }
    else if(root->data > val){
        //left part me jao
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else{
        //right prat me jao
        root->right  = deleteFromBST(root->right, val);
        return root;
    }
}

int main(){

    Node* root = NULL;

    cout<<"Enter data to create BST"<<endl;
    takeInput(root);

    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);

    cout<<"Min value is "<<minVal(root)->data<<endl;
    cout<<"Max value is "<<maxVal(root)->data<<endl;
    
    //deletion
    root = deleteFromBST(root,30);
    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);
    return 0;
}

//TODO- learn Inorder predecessor and succesor?