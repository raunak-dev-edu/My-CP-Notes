// reverse the given a single linked list of integers 

// approach 1-
// Node* reverseLinkedList (Node * head) {
//     if(head == NULL || head -> next == NULL){
//         return head;
//     }

//     Node* prev = NULL;
//     NOde* curr = head;
//     Node* forward = NULL;

//     while(curr!= NULL) {
//         forward = curr -> next;
//         curr -> next = prev;
//         prev= curr;
//         curr = forward;
//     }
// }


// approach 2 - by recursion
// void reverse(Node* &head, Node* curr,NOde* prev ){

//     //base case
//     if(curr == NULL){
//         head = prev;
//         return;
//     }

//     Node* forward = curr -> next;
//     reverse(head, forward, curr);
//     curr -> next = prev;
// }
// Node* reverseLinkedList (Node * head) {

//     Node* curr = head;
//     Node* prev =NULL;
//     reverse(head, curr, prev);
//     return head;
// }


// approach 3 - another recursive solution
// Node* reverse1(Node* head) {

//     //base case
//     if(head == NULL || head -> next == NULL){
//         return head;
//     }
//     Node* chotaHead = reverse1(head -> next);
//     head -> next -> next = head;
//     head -> next = NULL;

//     return chotaHead;
// }
// Node* reverseLinkedList (Node * head) {

//     return reverse1(head->next);
// }