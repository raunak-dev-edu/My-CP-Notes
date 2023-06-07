// https://www.codingninjas.com/codestudio/problems/unique-sorted-list_2420283?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar29thJan
/*
- remove duplicates in sorted linked list
Node* uniqueSortedList(Node* head) {
    /empty list
    if(head == NULL){
        return NULL;
    }

    /non empty list
    Node* curr = head;

    while(curr!= NULL){
        if((curr -> next != NULL)&& curr -> data == curr -> next -> data){
            Node* next_next = curr -> next->next;
            Node* nodeToDelte = curr->next;
            delete(nodeToDelte);
            curr -> next = next_next;
        }
        else{ /not equal
            curr = curr -> next;
        }
    }
    return head;
}

*/ 