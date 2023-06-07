// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbklWSm93VXoyNWNHLUdUMjhKYXZUaExPLWp1d3xBQ3Jtc0tsTFgtZGJjWDBSdThBSlZsNXJHazQ3QnQ3RHo0Umk3Z1FtNVRpa3JfRmZpMHFMekJCQjNESFRCVktObGJxaWI1UERHNkhFV3lpQnRaSzZ1WTBpcU9SdkdVdHE5WngwQlRGWkx5dDc3ZHNhcVRxSGN5SQ&q=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Fqueue-reversal%2F1&v=_gJ3to4RyeQ
/*
-> reverse queue

-> approach 1 - using stack
queue <int> rev(queue<int> q){

    stack<int> s;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
} 

-> approach 2 - using recursion


*/