// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbXJac2lUd0Q3enBINDVEMjFucjJYcndSc3JJd3xBQ3Jtc0ttU1pDLUtIMEhjaV9tWnhHb1hLaEhaM3UxU2EzbVJUWER2cEVoV0VMZWhxX2FjQ3BmYTVPc19PR3RBbWxjcHV2MVNyRlE0S1o0d2o2LWVIR1VfNWtacl9RZmdQbVgzT3ZUSDFoOVpZcHZXWEhLbXk4MA&q=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Ffirst-non-repeating-character-in-a-stream1216%2F1&v=_gJ3to4RyeQ
/*
->first non - repeating character in stream

string FristNonRepeating(string A){
    unordered_map<char, int> count;
    queue<int> q;
    string ans ="";

    for(int i =0; i<A.lenght();i++){
        char ch = A[i];

        //increaase count
        count[ch]++;

        //queue me push karo
        q.push(ch);

        while(!q.empty()){
            if(count[q.front()]>1){
                //repeating character
                q.pop();
            }
            else{
                // non repating character mil gaya
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}



*/