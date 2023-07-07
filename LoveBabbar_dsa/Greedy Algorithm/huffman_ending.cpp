// https://practice.geeksforgeeks.org/problems/huffman-encoding3345/1
/*
-> Huffman Encoding - Given a string S of distinct character of size N and their corresponding frequency f[ ] i.e. character S[i] has f[i] frequency. Your task is to build the Huffman tree print all the huffman codes in preorder traversal of the tree.
Note: While merging if two nodes have the same value, then the node which occurs at first will be taken on the left of Binary Tree and the other one to the right, otherwise Node with less value will be taken on the left of the subtree and other one to the right.

class Node {
    public: 
        int data;
        Node* left;
        Node* right;

        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

class cmp {
    public:
    bool operator()(Node* a, Node* b){
        return a-> data > b-> data;
    }
};
class Solution {
    public:
    void traverse(Node* root, vector<string> & ans, string temp){
        //base case
        if(root->left == NULL && root -> right == NULL){
            ans.push_back(temp);
            return;
        }
        traverse(root->left, ans, temp+'0');
        traverse(root->right, ans, temp + '1');
    }
    vector<string> huffmanCodes(string S,vector<int> f,int N){
    priority_queue<Node*, vector<Node*>, cmp> pq;

    for(int i=0; i<N; i++){
        Node* temp = new Node(f[i]);
        pq.push(temp);
    }
    while(pq.size()>1){
        Node* left = pq.top();
        pq.pop();

        Node* right = pq.top();
        pq.pop();

        Node*  newNode = new Node(left-> data + right-> data);
        newNode->left =  left;
        newNode->right = right;
        pq.push(newNode);
    }
    Node* root = pq.top();
    vector<string> ans;
    string temp ="";
    traverse(root,ans,temp);
    return ans;
}
};




*/