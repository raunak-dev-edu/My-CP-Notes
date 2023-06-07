// https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1
/*
->clone a linked list with random pointers

-> approach 1 - using original list next pointer


-> approach 2 - using map 

void insertAtTail (Node* &head, Node* &tail, int d){
    Node* newNode = new Node(d);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        tail -> next = newNode;
        tail = newNode;
    }
}
Node* copyList(Node* head){

    //step! - create s clone list
    Node* cloneHead =NULL;
    Node* cloneTail = NULL;

    Node* temp= head;

    while(temp!=NULL){
        insertAtTail(cloneHead, cloneTail, temp-> data);
        temp = temp -> next;
    }

    //step2 - create a map
    unordered_map<Node*, Node*> oldToNewNode;

    Node* originalNode = head;
    Node* cloneNode = cloneHead;
    while(originalNode!= NULL && cloneNode!= NULL){
        oldToNewNode[originalNode] = cloneNode;
        originalNode =originalNode-> next;
        cloneNode = cloneNode -> next;
    }

    originalNode = head;
    cloneNode = cloneHead;

    while(originalNode!=NULL){
        cloneNode -> arb = oldToNewNode[originalNode -> arb];
        originalNode =originalNode -> next;
        cloneNode = cloneNode -> next;

    }
    return cloneHead;
}


-> approach 3 - using pointers (change links)

Node*copyList(Node* head){

    //step1- create a clone list

    Node* cloneHead = NULL;
    Node* cloneTail =NULL;

    Node* temp = head;
    while(temp != NULL){
        insertAtTail(cloneHead,clone);
        temp = temp -> next;
    }

    //step2 - cloneNodes add in between original List

    Node* originalNode = head;
    Node* cloneNode = cloneHead;

    while(originalNode !=NULL && cloneNode != NULL){
        Node* next = originalNode -> next;
        originalNode -> next = cloneNode;
        originalNode = next;

        next = cloneNode -> next;
        cloneNode -> next = originalNode;
        cloneNode = next;
    }

    //step3 - random pointer copy

    temp = head;

    while(temp != NULL){
        if(temp -> next != NULL){
            temp-> next -> arb = temp -> arb ? temp => arb -> next: temp ->arb;
        }
        temp = temp -> next -> next;
    }
    //step4 - revert chnges done in step 2;

    originalNode = head;
    cloneNode = cloneHead;

    while(originalNode != NULL && cloneNode != NULL){
        originalNode -> next = cloneNode -> next;
        originalNode = originalNode -> next;

        if(originalNode != NULL){
            cloneNode -> next = orignialNode -> next;
        }
        cloneNode = cloneNode -> next;

    }

    //step 5 - return ans
    return cloneHead;
}



*/
