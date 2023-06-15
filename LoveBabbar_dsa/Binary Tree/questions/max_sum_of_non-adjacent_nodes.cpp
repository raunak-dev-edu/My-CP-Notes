// https://practice.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1
/*
-> Maximum sum of Non-adjacent nodes

pair <int,int> solve(Node* root){
    //base case
    if(root == NULL){
        pair<int, int > p =make_pair(0,0);
        return p;
    }

    pair<int,int> left = solve(root->left);
    pair<int, int> right = solve(root->right);

    pair<int,int> res;

    res.first = root->data + left.second + right.second;

    res.second = max(left.first, left.second)+max(right.first,right.second);

    return res;
}
int getMaxSum(Node *root) {

    pair<int,int> ans = solve(root);
    return max(ans.first, ans.second);
}



*/