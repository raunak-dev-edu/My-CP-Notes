// https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1
/*
-> check if given linked list is palindrome or not

-> Approach1 - converting linked list data into array and check array as palindrome.
bool checkPalindrome(vector <int> arr){
    int n = arr.size();
    int s =0;
    int e = n-1;

    while(s<=e){
        if(arr[s]!= arr[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
bool ispalindrome(Node* head){
    vector <int> arr;

    Node* temp = head;
    while(temp!=NULL){
        arr.push_back(temp -> data);
        temp = temp -> next;
    }
    return checkPalindrome(arr);
}


-> Approach 2 - find mid and reverse list after mid and then compare both part of mid
Node* getMid(Node* head){
    Node* slow  = head;
    Node* fast = head -> next;

    while(fast!= NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}
Node* reverse(Node* head) {
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr!= NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool ispalindrome(Node* head){
    if(head -> next == NULL){
        return true;
    }

    //step1 -> find middle
    Node* middle = getMid(head);

    // step2 -> reverse list after mid
    Node* temp = middle -> next;
    middle -> next = reverse(temp);

    //step3 -> compare both halfs
    Node* head1 = head;
    Node* head2 = middle -> next;

    while(head2!= NULL){
        if(head1 -> data != head2 -> data){
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }

    //step4 -> repeate step 2 to make it in original list
    Node* head1 = head;
    Node* head2 = middle -> next;

    return true;

}

*/