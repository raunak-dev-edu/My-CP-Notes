// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbjJhX093WF9LMVZlMUV5ZGxqNzliaF9vOFlEd3xBQ3Jtc0tsN25vQzdSWGtwLUtGX1ZoVm9kWE14dDB6ZFFqcmRPUWhpQ1V2bzRTdVRpN2owLUtERVJNQlJ5a3paLW5BMHNlTFhkeHhUN0xpTWVCVGRSRHFicTFhc0NmS19nM2N0eW9QbmtYR05kNWJkMmhORFVEcw&q=https%3A%2F%2Fbit.ly%2F3rfFdfV&v=ogmBt6f9hw8
/*
-> merge two sorted linked list.

Node<int>* solve(Node<int>* first, Node<int>* second){

    //if only one element is present in first list
    if(first-> next == NULL){
        first->next =second;
        return first;
    }
    Node<int>* curr1 =first;
    Node<int>* next1 = curr1-> next;
    Node<int>* curr2 = second;
    Node<int>* next2 = curr2-> next;

    while(next1!= NULL && curr2!= NULL){
        if((curr2 -> data >= curr1 -> data) && (curr2 -> data <= next1 -> data)){
            // add node in between the first list
            curr1 -> next = curr2;
            next2 = curr2 -> next;
            curr2 -> next = next1;
            // upadte pointers
            curr1 = curr2;
            curr2 = next2;       
        }
        else{
            // curr1 and next1 ko aage badhna padega
            curr1 = next1;
            next1 = next1 -> next;

            if(next1 == NULL){
                curr1 -> next = curr2;
                return first;
            }
        }
    } 
    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }

    if(first-> data <= second -> data){
        return solve (first, second);
    }
    else{
        return solve (second, first);
    }
}


*/ 