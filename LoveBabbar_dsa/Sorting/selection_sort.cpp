// selection sort : -  smallest element shift to its right place.
// https://www.codingninjas.com/codestudio/problems/selection-sort_981162?source=youtube&campaign=love_babbar_codestudio2

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i =0; i<n-1; i++){
        int minIndex =i;
        for(int j=i+1; j<n; j++){
            if(arr[i]<arr[minIndex])
            minIndex =j;
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){
    
    return 0;
}