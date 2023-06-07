// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbDg0V2xGSDF0RVp2NVZRclFoMkxrXzFMWXlUUXxBQ3Jtc0tuRDFEVDg0d2lUZ01lVjZSTUF3Y0ZLbV9SX1NzRm5fWkRaUVk3TUl1N2xyYm8yUlV2TFA4ZXVWZDNnNER0SXJjYXliVU9HcDlvM29FdTVCQ0dSYkRhOTIyN1YxSFF1N3ZmVXNDdTlJVzZBUVZtM2VKMA&q=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Freverse-first-k-elements-of-queue%2F1%2F&v=_gJ3to4RyeQ
/*
->reverse first k element of queue

queue<int> modifyQueue(queue<int> q, int k){

    //algo
    //step1 - pop first k from q and put into stack
    stack<int> s;
    for(int i =0; i<k; i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }

    //step2 - fetch from stack and push into q
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }

    //step3 = fetch dirst (n-k) elements from q and push back

    int t = q.size()-k;

    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}


*/