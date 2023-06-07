// set-1
// unset-0

// to find given no is set or not -

// slect a number whose ith bit is 1 and rest are zero ith bit is for which we have to check bit is set or not.
// and then apply and operation of both number 
// if ith bit comes to 1 then original number's ith is set otherwise it's unset.

// shift of bit
// 1<<i - shift 1 left side for ith time and assign zero on that place like this- (basically ith bit pe 1 hoyga)
// 1<<1 =1, 1<<1 = 10, 1<<2 = 100

#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=10; i>=0; --i){
        cout<< ((num >> i) & 1);
    }
    cout<<endl;
}

int main(){
    int a = 9;
    printBinary(a);
    int i = 3;
    if((a & (1<<i))!=0){
        cout<<"set  bit";
    }
    else{
        cout<< "not set bit";
    }
    //bit set
    printBinary( a | (1<<1));

    // bit unset 
    printBinary( a & (~(1<<3)));

    // toggle
    printBinary( a ^ (1<<2));

    // count bit 
    int ct =0;
    for(int i = 31; i>=0; --i){
        if((a & (1<<i))!=0){
            ct++;
        }
    }
    cout<<ct<<endl;

    cout<<__builtin_popcount(a) << endl;
    cout<<__builtin_popcountll(1LL<<35-1)<<endl;
    
    return 0;
}