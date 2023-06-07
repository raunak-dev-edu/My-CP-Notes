/*
-> Queue-  type of data structure in which first in first out followed.
-> Cicular Queue - rear goes to stating when it comes to end of array.
-> input restricted queue - input only one side (from rear) but output can be both side (front and rear)
-> output restricted queue - output only one side and input from both side
-> doubly ended queue - both side can be used for push and pop (front and rear)

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    // //create a queue
    // queue <int> q;

    // q.push(11);
    // cout<< "front of q is "<<q.front()<<endl;
    // q.push(15);
    // cout<<"front of q is "<<q.front()<<endl;

    // q.push(13);
    // cout<<"front of q is "<<q.front()<<endl;

    // cout<<"size of queue is "<<q.size()<<endl;

    // q.pop();
    // q.pop();
    // q.pop();
    
    // cout<<"size of queue is "<<q.size()<<endl;

    // if(q.empty()){
    //     cout<<"queue is empty"<<endl;
    // }
    // else{
    //     cout<<"queue is not empty"<<endl;
    // }

    //Double ended queue
    deque<int> d;

    d.push_front(12);
    d.push_back(14);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_back();

    if(d.empty()){
        cout<< "queue is empty"<<endl;
    }
    else{
        cout<<"queue is empty"<<endl;
    }

    return 0;
}