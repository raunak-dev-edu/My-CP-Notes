// https://www.codingninjas.com/codestudio/problems/redundant-brackets_975473?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio
/*
-> Find redundant brackets - subexpression is surrounded by needless/useless brackets.
example- ((a+b)) has a pair of redundant brackets. while (a +(b*c)) does not have redundant brts.

bool findRedundantBrackets(string &s){

    stack<char> st;
    for(int i =0; i<s.length();i++){
        char ch = s[i];

        if(ch=='(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        else{
            //ch ya toh ')' hai or lowercase letter

            if(ch == ')'){
                bool isRedundant = true;

                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top ==  '/'){
                        isRedundant = false
                    }
                    st.pop();
                }
                if(isRedundant == true){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}


*/