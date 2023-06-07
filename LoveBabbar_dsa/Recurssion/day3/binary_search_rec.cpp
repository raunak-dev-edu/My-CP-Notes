#include <bits/stdc++.h>
using namespace std;
bool bs(int arr[],int s, int e, int k){

//base 
    if(s>e){
        return false;
    }

    int mid = s+ (e-s) /2;

    if( arr[mid]==k){
        return true;
    }

    if(arr[mid] <k){
        return bs (arr, mid+1, e, k);
    }
    else{
        return bs( arr, s, mid-1, k);
    }


}

int main(){
    int n, k;
    cin >> n >>k;
    int arr[n];

    for(int i =0; i< n; i++){
        cin>>arr[i];
    }

    bool ans = bs ( arr,0, n-1,k);
    if(ans){
        cout<< " present "<<endl;
    }
    else{
        cout<< " absent "<<endl;

    }
    return 0;
}