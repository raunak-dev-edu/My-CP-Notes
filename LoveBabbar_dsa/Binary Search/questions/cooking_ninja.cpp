#include <bits/stdc++.h>
using namespace std;

int isPossible(int arr[], int n, int m, int mid)
{

    int dish = 0;
    for (int i = 0; i < n; i++)
    {
        int time = 0;
        int j = 1;
        while (time + (j * arr[i]) <= mid && dish<m)
        {
            time += (j * arr[i]);
            j++;
            dish++;
        }
    }
    // cout<<dish<<endl;
    if (dish == m)
    {
        return true;
    }
    return false;
}

int minCookTime(int arr[], int n, int m)
{
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi * ((m*(m+1))/2);
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << minCookTime(arr, n, m);

    return 0;
}