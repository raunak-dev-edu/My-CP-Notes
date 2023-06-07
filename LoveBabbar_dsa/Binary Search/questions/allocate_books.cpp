// https://www.codingninjas.com/codestudio/problems/ayush-and-ninja-test_1097574?source=youtube&campaign=love_babbar_codestudio2

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPossible(int n, int m, int arr[], int mid)
{
    int day = 1;
    int totalTime = 0;

    for (int i = 0; i < m; i++)
    {
        if (totalTime + arr[i] <= mid)
        {
            totalTime += arr[i];
        }
        else
        {
            day++;
            if (day > n || arr[i] > mid)
            {
                return false;
            }
            totalTime = arr[i];
        }
    }
    return true;
}

ll ayushGivesText(int n, int m, int arr[])
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = 0;
    int mid = s + (e - s) / 2;
    
    while (s <= e)
    {
        if (isPossible(n, m, arr, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    cout << ayushGivesText(n, m, arr);
    return 0;
}