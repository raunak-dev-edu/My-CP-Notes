#include <bits/stdc++.h>
using namespace std;

class Animal {
    public: 
    int age;
    int weight;

    public:
    void speak() {
        cout<< "Speaking" <<endl;
    }
};

class Dog: public Animal {

};

class GermanSepherd : public Dog {

};

int main(){

    GermanSepherd d1;

    d1.speak();
    cout<<d1.age<<endl;
    return 0;
}