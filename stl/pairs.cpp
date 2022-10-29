#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string> p; //This is way to make pairs. we can make pairs of any data types or containers for example:- pairs<int,int> ,pairs <int, double>
    // There are two methods to assign values in pairs.
    // 1. 
    p=make_pair(2,"abc");
    cout<< p.first << " " << p.second;
    return 0;
}