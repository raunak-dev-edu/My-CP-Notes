// https://www.codingninjas.com/codestudio/problems/flatten-a-linked-list_1112655?source=youtube&campaign=YouTube_CodestudioLovebabbar5thfeb
/*
-> flatten a linked list which nodes contain two pointers - first point to next and another to child linked list

->approach - use recusion and merge sort 
TODO - this is not axact code just a idea to solve 
flatted(head){
    node* down = head;
    down -> next =NULL;
    node* right = flatten (head -> right)
    node* ans = merge (down, right)
    return ans;
}


*/