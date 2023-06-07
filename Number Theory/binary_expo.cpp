#include <bits/stdc++.h>
using namespace std;

int power(int a, int n){
    int res=1;
    while(n){
        if(n%2){
            res*=a;
            n--;
        }
        else{
            a*=a;
            n/=2;
        }
    }
    return res;
}

int main(){
    cout<<power(2,5);
    
    return 0;
}