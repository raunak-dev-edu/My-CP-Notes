#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

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
    int even[6] = {2,4,6,8,12,16};
    int odd[6] = {1,3,5,7,11,15};

    int index1 = binary_search(even,6,12);
    int index2 = binary_search(odd,6,15);
    cout<< "Index of 12 is "<< index1 << endl;
    cout<< "Index of 15 is "<< index2 << endl;

    return 0;
}