/*
https://www.codingninjas.com/codestudio/problems/interview-shuriken-42-detect-and-remove-loop_241049?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_codestudio_lovebabbar28thjan

-> detect and remove loop in ll.
-> question can be asked  in such a way -
    - detect cycle in ll.
    - remove cycle from ll.
    - beginning/ start node of loop in ll.

-> Approach 1 - by map
bool detectLoop(Node*  head){

    if(head == NULL){
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp!= NULL){
        //cycle is present
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    } 
    return false;
}


-> Approach 2 - Floyd's cycle detection algo
Node* floydDetectLoop(Node* head) {
    if(head === NULL){
        return NULL;
    }

    Node* fast = head;
    Node* slow = NULL;

    while(slow!= NULL && fast!= NULL){

        fast = fast-> next;
        if(fast != NULL){
            fast = fast -> NULL;
        }
        slow = slow -> next;
        
        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}


-> approach 3 - find strting of loop
NOde* getStartingNode(Node* head) {

    if(head == NULL){
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    NOde* slow = head;

    while(slow!= intersection ){
        slow = slow-> next;
        intersection = intersection -> next;
    }
    return slow;
}


->appproach 4 -  remove loop from ll
void removeLoop(Node* head){
    if(head== NULL){
        return;
    }

    Node* startOfLoop = getStartOfLooop(head);
    Node* temp  = startOfLoop;

    while(temp -> next != startOfLoop){
        temp = temp -> next;
    }
    temp -> next = NULL;
}



*/