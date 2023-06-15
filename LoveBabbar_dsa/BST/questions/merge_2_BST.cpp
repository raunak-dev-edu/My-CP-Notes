// https://www.codingninjas.com/codestudio/problems/h_920474?leftPanelTab=0
/*
->merge 2 BST
TODO -code is giving error in codestudio
->approach 1 - using inorder
void inorder(TreeNode<int>* root, vector<int> &in){
    if(root == NULL)
        return;
    
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}
vector<int> mergeArrays(vector<int> &a, vector<int> &b){
    vector<int> ans(a.size() + b.size());

    int i =0, j =0;
    int k =0;
    while(i <a.size() && j<b.size()){
        if(a[i]<b[i]){
            ans[k++] = a[i];
            i++;
        }
        else{
            ans[k++] = b[j];
            j++;
        }
    }
    while(i<a.size()){
        ans[k++] = a[i];
            i++;
    }
    while(j<b.size()){
        ans[k++] = b[j];
            j++;
    }
    return ans;
}
TreeNode<int>* inorderToBST(int s, int e, vector<int> &in){
    //base case
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(in[mid]);
    root->left = inorderToBST(s, mid-1,in);
    root->right = inorderToBST(mid+1,e,in);
    return root;
}
TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){

    //step1 - store inorder
    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);

    //step2 - merge both sorted arrays
    vector<int> mergeArray = mergeArrays(bst1,bst2);

    //step3 - use merge inorder array to build BST
    int s =0, e = mergeArray.size()-1;
    return inorderToBST(s,e,mergeArray);
}

->approach 2 - convert to sorted linked list (TC - O(m+n), SC - O(h1+h2))
-step1 = convert BST into sorted LL (TC- O(n), SC- O(h))
-step2 = merge 2 sorted linked list 
-step3 = sorted LL to BST

void convertIntoSortedDLL(TreeNode<int>* root, TreeNode<int>* &head){
    //base case
    if(root == NULL){
        return NULL;
    }

    convertIntoSortedDLL(root->right, head);

    root->right = head;

    if(head != NULL){
        head->left = root;
    }
    head = root;

    convertIntoSortedDLL(root->left,head);
}

TreeNode<int> mergeLinkedList(TreeNode<int> *head1, TreeNode<int> *head2){
    TreeNode<int> *head = NULL;
    TreeNode<int> *tail = NULL;

    while(head1!=NULL && head2 != NULL){
        if(head1->data < head2 ->data){
            if(head == NULL){
                head = head1;
                tail = head1;
                head1 = head1 ->right;
            }
            else{
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        else{
            if(head == NULL){
                head = head2;
                tail = head2;
                head2 = head2 ->right;
            }
            else{
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
            }

        }
    }
    while(head1!= NULL){
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }
    while(head2!=NULL){
        tail->right = head2;
            head2->left = tail;
            tail = head2;
            head2 = head2->right;
    }
    return head;
}
int countNodes(TreeNode<int>* head){
    int cnt=0;
    TreeNode<int>* temp = head;
    while(temp!= NULL){
        cnt++;
        temp = temp->right;
    }
    return cnt;
}
TreeNode<int>* sortedLLToBST(TreeNode<int>* &head, int n){
    //base case
    if(n<=0 || head == NULL){
        return NULL;
    }

    TreeNode<int> *left = sortedLLToBST(head, n/2);

    Treenode<int>*root = head;
    root->left = left;

    head = head ->next;

    root->right = sortedLLToBST(head, n-n/2-1);
    return root;
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){

    // step1
    TreeNode<int>*head1 = NULL;
    convertIntoSortedDLL(root1,head1);
    head1 ->left = NULL;

    TreeNode<int>*head2 = NULL;
    convertIntoSortedDLL(root2,head2);
    head2 -> left = NULL;

    // step2
    TreeNode<int>*head = mergeLinkedList(head1,head2);

    //step3
    return sortedLLToBST(head,countNode(head));

}


*/