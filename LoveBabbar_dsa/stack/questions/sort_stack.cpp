// https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio
/*
->sort a stack using recursion

void sortedInserted(stack <int> &stack, int num){
    //base case
    if(stack.empty() || (!stack.empty() && stack.top()<num)){
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    //recursive call
    sortedInserted(stack, num);

    stack.push(n);
}

void sortStack(stack <int> &stack){
    //base case
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    //recursive call
    sortStack(stack);

    sortedInserted(stack, num);
}



*/