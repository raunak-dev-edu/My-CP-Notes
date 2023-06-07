/*
stack -  last in first out.
TODO - stack implementation using linked list

*/

#include <bits/stdc++.h>
using namespace std;

class Stack {

    public:
        int *arr;
        int top;
        int size;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top =-1;
    }

    void push(int element){
        if(size - top >1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peak(){
        if(top>= 0 ){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }

    bool isEmpty() {

        if(top== -1){
            return true;
        }
        else{
            return false;
        }

    }

};

int main(){

/* Basic of stack
    //creation of stack
    stack <int> s;

    //push operation 
    s.push(2);
    s.push(3);

    //pop
    s.pop();

    cout<<"Printing top element " << s.top() << endl;

    if(s.empty()){
        cout<< "Stack is empty" <<endl;
    }
    else{
        cout<<"stack is not empty" <<endl;
    }

    cout<<"size of stack is "<<s.size()<<endl;
    */

//    class based stack 
    Stack st(5);

    st.push(22);
    st.push(23);
    st.push(45);

    cout<< st.peak() <<endl;
    st.pop();

    cout<< st.peak() <<endl;
    st.pop();

    cout<< st.peak() <<endl;
    st.pop();

    cout<< st.peak() <<endl;

    
    return 0;
}