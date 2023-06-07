#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m , int arr3[]){
    int i=0, j =0, k =0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr2[k] = arr2[j];
        k++;
        j++;
    }
}

int main(){
    int arr1 [5] = { 2, 4 ,6 ,8 ,10};
    int arr2 [3] = {1, 3, 5};
    int arr3 [8] = {0};

    merge(arr1, 5, arr2, 3, arr3);
    for(int i =0 ; i < 8 ; i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}