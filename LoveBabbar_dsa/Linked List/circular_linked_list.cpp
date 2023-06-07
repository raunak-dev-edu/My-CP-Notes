#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    // Destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this-> next = NULL;
        }
        cout<< "memory is free for node with data "<< value <<endl;
    }

};

//Insert
void insertNode(Node* &tail, int element, int d ){
    
    //empty list
    if(tail == NULL){
        Node * newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{ //non empty list
    //assuming that the element is present in the list
        Node* curr = tail;

        while(curr-> data != element) {
            curr = curr -> next;
        }

        //element found -> curr is represnting element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }
}

//traverse
void print(Node* tail){
    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout<< "List is Empty" << endl;
        return;
    }

    do {
        cout<< tail -> data<< " ";
        tail = tail -> next; 
    } while (tail!= temp);
        cout<< endl;
    
} 

//delete
void deleteNode(Node*  & tail, int value ){
    //empty list
    if(tail == NULL) {
        cout<< " List is empty, please check again" <<endl;
        return;
    }
    else{
        //non-empty

        // assuming that "value" is present in the linked list
        Node* prev =tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr-> next;
        }

        prev->next = curr->next;

        //for 1 node linked list
        if(curr == prev ){
            tail = NULL;
        }
        //>=2 node linked list
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;

    }
}

int main(){

    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print (tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 11);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    deleteNode(tail, 3);
    print(tail);
    
    return 0;
}