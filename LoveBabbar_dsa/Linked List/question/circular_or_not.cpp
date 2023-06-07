// https://www.codingninjas.com/codestudio/problems/circularly-linked_1070232?source=youtube&campaign=Lovebabbar_codestudio_26thjan
// check given linked list is circular ot not 

// approach1
// bool isCircularList(Node* head){
//     //empty list
//     if(head ==NULL){
//         return true;
//     }

//     Node* temp = head -> next;
//     while(temp!=NULL && temp!= head){
//         temp = temp -> next;
//     }

//     if(temp == head){
//         return true;
//     }

//     return false;
// }


//approach2 - using map
