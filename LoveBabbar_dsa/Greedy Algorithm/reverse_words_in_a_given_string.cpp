// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
/*
-> Reverse words in a given string - Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

string reverseWords(string S) {
    string ans = "";
    string temp = "";
    for(int i = S.length() -1; i>=0; i--){
        if(S[i] == '.'){
            reverse(temp.begin(), temp.end());
            ans = ans + temp;
            ans.push_back('.');
            temp="";
        }
        else{
            temp.push_back(S[i]);
        }
    }
    reverse(temp.begin(), temp.end());
    ans = ans + temp;
    return ans;
}





*/