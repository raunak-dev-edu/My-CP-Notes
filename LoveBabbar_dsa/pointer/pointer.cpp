// kisi ka address nikalne k liye us variable k aage '&' laga do

#include <bits/stdc++.h>
using namespace std;

int getSum(int arr[], int n){
    cout<<endl <<"size "<<sizeof(arr)<<endl;  //gives sizes of pointer as arr is used as pointer in function we can also use it like (int *arr) gives same value

    int sum  =0;
    for(int i =0 ;i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    // int arr [10] = {2,5,6};
    // cout<< "address of first memory block is "<<arr<<endl;
    // // also
    // cout<< "address of first memory block is "<<&arr[0]<<endl;
    
    // cout << "4th " << *arr <<endl;
    // cout<< "5th "<< *arr +1 <<endl;
    // cout<< "6th "<< *(arr + 1)<<endl;
    // cout<< "6th "<< *(arr + 2)<<endl;
    //  formula- arr[i] = *(arr+i) is same for i[arr] = *(i+arr)

    // int temp[10] = {1,2};
    // cout<< sizeof(temp)<<endl;
    // cout<<" 1st "<< sizeof(*temp) <<endl; //refrence to value
    // cout<< " 2nd "<< sizeof(&temp) <<endl; //refrence to adress

    // int *ptr = &temp[0];
    // cout<< sizeof(ptr)<<endl; // refrence to address
    // cout<< sizeof(*ptr)<<endl; //refrence to value
    // cout<< sizeof(&ptr)<<endl; //refrence to adress
    // cout<< ptr<<endl;

    //char pointer-

    // char ch[6] = "abcde";

    // cout<< ch<<endl;

    // char*c = &ch[0];
    // cout<< c <<endl; //print entire string

    // char temp = 'z';
    // char *p = &temp;

    // cout<< p <<endl;

    int arr [5] = {1,2,3,4,5};
    cout<<"sum " << getSum(arr,5)<<endl;
    return 0;
}