#include <bits/stdc++.h>
using namespace std;

// Fibonaci number  - https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbDloTklsRDNfa3ZTVmpGQldOTno1aWNGVFZBUXxBQ3Jtc0trZ0dzckttb2d0cTVORUdEdThSb3g3UzNJRFd3X25zVTJqUjVpQnY3bi16TE1tRDdDT19jZXh1RnJZVnZrSXc3U0RhM2h2LWRTWnVudzk4dzFxeFhnQmQtN2R4X2xwY29UZFZoRnh1WHNJUHlTMzVCNA&q=https%3A%2F%2Fleetcode.com%2Fproblems%2Ffibonacci-number%2F&v=zg8Y1oE4qYQ

int fib(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans = fib(n-1)+ fib(n-2);
    return ans;
}

// Climb stairs - https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbmhValVzMV85bFo2WnNSLUFBblc5akVfa3JwUXxBQ3Jtc0tuNHk5OExlcWNhYmZ2YUlvaXhRSXZyeUpiZHUyOVdkNUh1elI2N0p4RnZXMG9aTzQ5LXd5S2llVDFTLTF0ZDdSMVB0ZEdiUTJWYmQzU2sxQzVWOGVHeG15Qkp3OHVqYklwR29UZk50aUstT0EwQTdVMA&q=https%3A%2F%2Fbit.ly%2F32VA96H&v=zg8Y1oE4qYQ

int countDistinctWays(int nStairs) {
    if(nStairs < 0){
        return 0;
    }
    if(nStairs == 0){
        return 1;
    }

    int ans = countDistinctWays(nStairs-1)+ countDistinctWays(nStairs-2);

    return ans;
}

// say digits

void sayDigit(int n, string arr[66]){
    //base case
    if(n==0){
        return;
    }

    //processing
    int digit = n%10;
    n = n/10;

    //recursive call
    sayDigit(n, arr);

    cout<< arr[digit] << " ";
}

int main(){
    string arr[10] = {"zero" ,"one", "two", "three", "four","five", "six","seven","eight","nine"};
    int n;
    cin>>n;
    cout<<endl;
    sayDigit(n,arr);

    return 0;
}