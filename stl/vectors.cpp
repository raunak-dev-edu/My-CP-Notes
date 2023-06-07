#include <bits/stdc++.h>
using namespace std;

//function to print vector
void printvect(vector <int> v){
    cout<< "Size: "<<v.size() << endl;
    for(int i=0; i<v.size(); i++){ //v.size() -> o(1 )
        cout<<v[i]<< " "; 
    }
    cout<< endl;
}
int main(){
    vector <int> v; //decalation of vector
    int n;
    cin>>n;
    //way to add number in vector
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x); //put number at the end. time complexity = o(1)
    }
    //we can also define fix size of vector like this
    vector <int> v2(10); // but it asssign 0 value to all elements
    // if we use v2(10,3) then all ten elements get 3 value
    v2.push_back(7); // add 7 in last 
    v2.pop_back(); // remove last element
    vector<int> v3=v; //copy vector ...... o(n)
    printvect(v);
    return 0;
}

// Vector is dynamic in size. It can be extended 
// to pass vector as reference use &v as copy of vector is o(n) so make copy by reference