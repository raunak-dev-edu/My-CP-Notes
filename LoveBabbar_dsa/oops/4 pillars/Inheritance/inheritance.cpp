/*
Inheritance - Inherit the properties of one class to other class

public(base class) - public(mode)   = access publically
public(base class) - private (mode) = access private
public('')         - protected ('') = access protected
protected('')      - public ('')    = access protected
('')               - protected ('') = access protected
('')               - private ('')   = access private
private('')        - in all cases   = not accessible

Types of Inheritance - Single, Mutli-level, Multiple, Hybrid, Hierarchical
single - class B inherited from class A.
multilevel - class A inhreit class B then class C inheirt means level wise inheirtance.
multiple - class c inherit both class A and class B.
Hierarchical - one class serve as parent class for more than 1 class
Hybrid- combination of more than 1 type of inheritance.
inheritance ambiguity - if class A and class B have same fun name and class inherit both class A and B and called fun then whose functionwill be called. this is ambiguity.
To resolve this issue we can use scope resolution operator (::) like obj A :: func() and obj B :: func().

*/

#include <bits/stdc++.h>
using namespace std;

class Human {

    public:
    int height;
    int weight;
    int age;

    public:
    int getAge() {
        return this -> age;
    }
    void setWeight(int w) {
        this -> weight = w;
    } 

};

class Male : public Human { // This is way to use inherit

    public:
    string color;

    void sleep() {
        cout << "Male is sleeping" <<endl;
    }
};

int main(){

    Male o1;
    cout<< o1.age<<endl;
    cout<< o1.weight<<endl;
    cout<< o1.height<<endl;
    cout<< o1.color<<endl;
    o1.sleep();
    o1.setWeight(80);
    cout<< o1.weight<<endl;

    
    return 0;
}