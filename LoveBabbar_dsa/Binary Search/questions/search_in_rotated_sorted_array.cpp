// codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include <bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n){
    int s=0;
    int e=n-1;

    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
        
    }
    return s;
}
int binary_search(int arr[], int size, int s, int e, int key){
    int start = s;
    int end = e-1;

    int mid = start + (end-start)/2;
    while(start<=end){
        if (arr[mid]== key){
            return mid;
        }

        if(key> arr[mid]){
            start =mid +1;
        }
        else{
            end = mid-1;
        }

        mid= start + (end-start)/2;
    }

    return -1;
}

int main(){
    int k=1;
    int arr[5] = {7,9,1,3,5};
    int pivot = getPivot(arr,5);
    if(k>=arr[pivot] && k <= arr[4]){
        cout << binary_search(arr,5,pivot,4,k);
    }
    else {
        cout << binary_search(arr, 5,0,pivot-1,k);
    }

    return 0;
}