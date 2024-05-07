/*
-> Binary tree - Non-linear data struture in which one node is connected to multiple node (different from linked list where one node is connected to one node only).
-Basic terms:
1] Node - a element that stores all the data
2] Root - from where tree started (top node)
3] Children - the branch under node of parent
4] Parent - the node having branches (children)
5] siblings - nodes of same parents.
6] Ancestor - going up to node
7] Descendant - going down to node
8] Leaf - node having no child

Traversal - Level Order Traversal, Inorder(LNR(left print then middle node then right print)) , preorder(NLR), postorder (LRN) traversal

*/

#include <bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this-> data =d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

//level order Traversal 
// TODO: read and write code for reverse level order traversal
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
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

//inorder traversal - (LNP)
void inorder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//preorder traversal - (NLP)
void preorder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

//postorder traversal - (LPN)
void postorder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

//Build tree from levelorder
void buildFromLevelOrder(node* &root){
    queue<node*>q;
    cout<<"Enter the data fro root"<<endl;
    int data;
    cin>> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter the left node for: "<<temp->data <<endl;
        int leftData;
        cin >> leftData;

        if(leftData!=-1){
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightData;
        cin >> rightData;

        if(rightData!=-1){
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
}


int main(){

    node* root = NULL;

/*
    //creating a Tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //level order
    cout<<"Printing the level order traversal output: "<<endl;
    levelOrderTraversal(root);

    cout<<"inorder traversal is: ";
    inorder(root);

    cout<<"preorder traversal is: ";
    preorder(root);

    cout<<"postorder traversal is: ";
    postorder(root);
*/

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // 1 3  5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    return 0;
}