// insertion sort :- sort like a card where pick one card first and compare all other with it, suppose pick one card and if its greater than our intitial card shift it to back else shift to front.
// https://www.codingninjas.com/codestudio/problems/insertion-sort_3155179?source=youtube&campaign=love_babbar_codestudio2

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i =0; i<n-1; i++){
        int temp =arr[i];
        int j = i -1;
        for(; j>=0; j--){
            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] =temp;
    }
}
int main(){
    
    return 0;
}