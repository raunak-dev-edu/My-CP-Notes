// https://leetcode.com/problems/peak-index-in-a-mountain-array/

#include <bits/stdc++.h>
using namespace std;

int peak_index(int arr[],int n){
    int s =0;
    int e= n-1;
    int mid = s + (e-s)/2;

    while (s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid +1;
        }
        else {
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int arr[4] = {0,2,1,0};
    cout<<peak_index(arr,4);
    return 0;
}