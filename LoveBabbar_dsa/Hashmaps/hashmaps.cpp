/*
Hashmaps- a type of data structure in which insertion,deletion,searching have lower time complexity so it's also most used in dev.

map (ordered) - O(logn)
un_ordered map - O(1)

TODO - Read theory - bucket array, hash function, open hashing, closed addressing,hash table

*/

#include <bits/stdc++.h>
using namespace std;


int main(){

    //creation
    unordered_map<string,int> m;
    
    //insertion
    // 1
    pair<string, int> p = make_pair("babbar", 3);
    m.insert(p);

    //2
    pair<string,int> pair2("love",2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    // if we use this 
    m["mera"] = 2; // value will be updated to 2 from 1

    // search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;

    // cout<<m.at("unknownKey") <<endl; this gives error as it not find the key 
    cout<<m["unknownKey"] <<endl; // this will create a key having value 0
    cout<<m.at("unknownKey") <<endl; // now this will give 0 too.

    // size
    cout<< m.size()<<endl;

    //to check presence
    cout<<m.count("bro")<<endl;  //if element is present it will result 1 otherwise 0

    //erase
    m.erase("love");
    cout<< m.size() << endl;

    // Iteration
    //1
    for(auto i:m){
        cout<< i.first << " "<<i.second <<endl;
    }

    //2
    unordered_map<string,int> :: iterator it = m.begin();

    while(it !=m.end()){
        cout<<it->first <<" "<<it->second <<endl;
        it++;
    }
    
    return 0;
}