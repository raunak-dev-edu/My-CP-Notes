#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p; // This is way to make pairs. we can make pairs of any data types or containers for example:- pairs<int,int> ,pairs <int, double>
    // There are two methods to assign values in pairs.
    // 1:-
    // p=make_pair(2,"abc");

    // 2:-
    p = {2, "abc"};

    pair<int, string> p1 = p;                   // way to copy and if use &p1 = p then there is reference value.
    p1.first = 3;                               // means p1=p will not change output of p1.first but &p1=p change the output of p1.first
    cout << p.first << " " << p.second << endl; // p.first print first value and p.second print second vlue.

    // pair of array:-
    pair<int,int> p_array[3];
    p_array[0]= {1,2};
    p_array[1]= {2,3};
    p_array[2]= {3,4};
    for(int i = 0; i<3; ++i){
        cout<< p_array[i].first<< " " << p_array[i].second<<endl;
    }
    //  we can use cin>>p.first for taking as input;
    return 0;
}