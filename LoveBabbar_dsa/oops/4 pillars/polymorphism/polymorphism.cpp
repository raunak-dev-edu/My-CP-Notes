/*
polymorphism - many forms
types of polymorphism - compile time polymorphism and run-time polymorphism
compile time polymorphism- also called static polymorphism. There is Function overloading and operator overloading under it.

Operator overloading - overload the operator means chnge the function of operator (like - add will print name (like a+b print raunak))

runtime polymorphism - also called dynamic polymorphism. There is Method overridding under it.
Method overridding = redefine parent class method also in child class method ( kind of same function used in both class).( They must have same name and parameters. And possible in inheritance only. )


*/

#include <bits/stdc++.h>
using namespace std;

class A {

    public: 
    void sayHello() {
        cout<< "hello raunak" <<endl;
    }
    void sayHello(string name) {
        cout<< "hello "<<name  <<endl;
    }

};

//operator overloading
class B{
    public:
    int a;
    int b;

    public:
    int add () {
        return a+b;
    }

    // operator assign this way-
    void operator+ ( B &obj) {
        int value1 = this -> a;
        int value2 = obj.a;
        cout<<"Output "<< value2 - value1 <<endl;
        cout<< "Raunak"<<endl;
    }

    void operator() (){  ///jahan v ye bracket ayga us k jaga nije print hoyga
        cout<< "main bracket hu "<< this->a <<endl; 
    }
};

class Animal {
    public:
    void speak() {
        cout<< "Speaking "<< endl;
    }
};

class Dog: public Animal {
    public:
    void speak(){
        cout<< "Barking" << endl;
    }
};

int main(){

    // A obj;
    // obj.sayHello();

    // B obj1, obj2;

    // obj1.a =4;
    // obj2.a = 7;

    // obj1 + obj2;
    // obj1();

    Dog obj;
    obj.speak();
    
    return 0;
}