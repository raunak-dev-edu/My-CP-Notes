// https://www.codingninjas.com/codestudio/problems/reverse-list-in-k-groups_983644?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbar_codestudio_26thjan
// reverse linked list in k group

// Node* kReverse(Node* head, int k) {
    
//     //base call
//     if(head == NULL ){
//         return NULL;
//     }

//     //step1: reverse first K nodes
//     Node* next = NULL;
//     Node* curr = head;
//     Node* prev = NULL;
//     int count =0;

//     while(curr != NULL && count< K) {
//         next = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = next;
//         count++;
//     }

//     //step2: recursion dekh lega aage
//     if(next!= NULL){
//         head->next = kReverse(next, k);
//     }

//     //step3: return head of reversed list
//     return prev;
// }