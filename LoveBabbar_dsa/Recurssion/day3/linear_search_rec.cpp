#include <bits/stdc++.h>
using namespace std;

bool ls( int *arr, int n, int k ){
    if(n  == 0 ){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    else{
        bool remaining  = ls ( arr+1, n-1, k);
        return remaining;
    }
}

int main(){
    int n, k;
    cin >> n >>k;
    int arr[n];

    for(int i =0; i< n; i++){
        cin>>arr[i];
    }

    bool ans = ls ( arr, n,k);
    if(ans){
        cout<< " present "<<endl;
    }
    else{
        cout<< " absent "<<endl;

    }
    return 0;
}