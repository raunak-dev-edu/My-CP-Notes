// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa0RLME02SUZIZDVjU0tvY0t5SjB1akpTMGxNUXxBQ3Jtc0tsYkRRcVI5eEdiT05yZXpYcDk2c2FrN25zYWo1clRvUHJzb21WUlFjU0xlR3RwXzZRVXFqVGxIUWN4Y3NCbjFRSUpQclVmVW4xc1dndjVacXVtVzA0VUF4dHJHVXZJUG14UlZwODhocmZUN19fV0tqWQ&q=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Ffirst-negative-integer-in-every-window-of-size-k3345%2F1&v=_gJ3to4RyeQ
/*
->Find first negative integer in every window of size k

vector <long long> printFirstNegativeInteger(long long int A[], long long int N, long long int k){
    deque<long long int> dq;
    vector <long long> ans;
    
    //proces first window of k size

    for(int i =0; i<k; i++){
        if(a[i]<0){
            dq.push_back(i);
        }
    }

    //store answer of first k sized window
    if(dq.size()>0){
        ans.push_back(a[dq.front()]);
    }
    else{
        ans.push_back(0);
    }

    //process for remaining windows
    for(int i = k; i<n; i++){
        //removal 
        if(!dq.empty() && i - dq.front() >=k){
            dq.pop_front();
        }

        //addition
        if(A[i]<0){
            dq.push_back(i);
        }

        //ans store
        if(dq.size()>0){
            ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
}


*/