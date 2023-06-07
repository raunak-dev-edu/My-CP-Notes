#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i =10; i>=0; --i){
        cout<<((num >> i)& 1);
    }
    cout<<endl;
}

int main(){
    // for checking odd/even
    for( int i =0; i<8 ; i++){
        printBinary(i);
        if(i&1){
            cout<<"odd\n";
        }
        else{
            cout<<"even\n";
        }
    }

    // n>>1 = right shift - divide n by 2
    // n<<1= left shift - multiply n by 2
    // example - 5>>1 print 2 and 5<<1 print 10;
    return 0;
}