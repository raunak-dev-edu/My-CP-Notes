#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPossible(ll arr[],ll n,ll m,ll mid){
    ll height =0;
    for(ll i =0; i<n; i++){
        if(arr[i]>mid && ((height + (arr[i]-mid))<=mid)){
            height += (arr[i]-mid);
        }
    }
    if(height<m){
        return false;
    }
    return true;
}

ll eko(ll arr[], ll n, ll m){
    ll s=0;
    ll maxi =-1;
    for(ll i=0; i<n; i++){
        maxi = max(maxi,arr[i]);
    }
    ll e = maxi;
    ll ans=-1;
    ll mid= s+(e-s)/2;

    while (s<=e)
    {
        if(isPossible(arr, n,m, mid)){
            ans =mid;
            s =mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}

int main(){
    ll n,m,i;
    cin>>n>>m;
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<eko(arr,n,m);
    
    return 0;
}