// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2

#include <bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int k)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans=mid;
            e=mid-1;
        }
        else if (arr[mid]>k){
            e = mid-1;
        }
        else if (arr[mid]<k){
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastocc(int arr[], int n, int k)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans=mid;
            s=mid+1;
        }
        else if (arr[mid]>k){
            e = mid-1;
        }
        else if (arr[mid]<k){
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[6] = {0, 5, 5, 6, 6, 6 };
    int a = firstocc(arr,6,5);
    int b = lastocc(arr,6,5);

    cout<<a<<" "<<b;
    return 0;
}