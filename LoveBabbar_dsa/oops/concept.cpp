// either we can define class by making class in same file or make file of class seperately and use it by ( #include "file name" ) to where we want to add class. Like here in hero.cpp.

//Three modifiers -  public, private, protected-
// public - class k bhar v access kr sakte ho
// private - class k ander he access kr sakte h bahar ni
// protected - kind of private but can be access by child class (like inherit class) but not outside of class.

// getter - can get value of private data outside of class
// setter - can set value of private data outside of class

// swallow copy - same memory access ( if we chnge original then copy is also chnged as it is refrencing to address)
// deep copy - create another copy ( if we chnge origianl then copy will not chnged as its value refrencing created by another copy)

// Copy assignment operator -
// Hero a(10."c") and Hero b(20, "b") then a=b will means a.health = b.health and a.level =b.level i.e, a got value of b.

// Destructor- memory deallocate - jb object bn jaye uska use katam hogya to memory delete kr deta h
// destructor built along with constructor like default constructor but we can make destructor by add "~" sign before name of constructor.

// TODO- check const keyword - object creation, function, initialisation list.

// static keyword - create a data belongs to class which does not nneed object for access.
// esko initialise v krna hota h (syntax - datatype classname :: fieldname = value)  - like this way (int Hero :: timeToComplete =5)
// static funtion -  can access only static member.

#include <bits/stdc++.h>
// #include "hero.cpp"
using namespace std;

class Hero {
     
    // properties
    private :
    int health;
    public:
    // int health;
    char level;
    static int timeToComplete;

    // constructor 
    Hero() {
        cout<< "Constructor called" << endl;
    }

    //parameterised constructor 
    Hero(int health, char level) {
        // cout<<" this address -" << this <<endl;
        this -> health  = health; //this is just like pointer - pointing (having address) to object created. like here adress of raunak.
        this -> level = level;
    }

    //copy constructor in another way
    Hero ( Hero &temp) {      // pass here by refrence if we not put & then it pass by value and make a copy of object thus it make infinite loop with copy contructor.
        this-> health = temp.health;
        this -> level = temp.level;
    }

    int getHealth() {
        return health;
    }

    void setHealth(int h) {
        health =h;
    }

    void print() {
        cout<< "health "<< this-> health <<endl;
        cout<< "level "<< this-> level <<endl;
    }

    //Destructor
    ~Hero() {
        cout<< "Destructor called" <<endl;
    }

    // static function
    static int random(){
        // return level <<endl; // gives error as level is not static member.
        return timeToComplete;  // gives value as it is static memeber.
    }
};

// static keyword initialisation
int Hero :: timeToComplete = 5;

int main(){

    // Hero h1;
    // Hero raunak;
    // // raunak.health = 100;
    // // raunak.level = 'A';

    // // cout<< "size " <<sizeof(h1) << endl; // size of empty class properties gives 1 byte
    // // cout<< "raunak'health is" << raunak.health << endl;
    // // cout<< "raunak'level is" << raunak.level << endl;
    
    // cout<< "Raunak health is befor set " << raunak.getHealth() << endl; //getter
    // raunak.setHealth(70); //setter
    // cout<< "Raunak health is after set " << raunak.getHealth() << endl; //getter

    // cout<< "size of Raunak " << sizeof(raunak) <<endl; // should give 5(int -4 and char -1) but ans 8 ------ TODO: learn padding, greedy alignment

    // //static allocation
    // Hero a;  // normal is static
    // a.setHealth(80);
    // cout<<"static allocation health " << a.getHealth() <<endl;
    
    // //dynamic allocation
    // Hero *b = new Hero;
    // (*b).setHealth(70); 
    // // or b->setHealth(70);
    // cout<<"dynamic allocation health " << (*b).getHealth()<<endl;
    
    // //constructor seen- consturctor called when there is object created.
    // cout<<"before hi"<<endl;
    // Hero construct;
    // cout<<"after constructor hi";

    // //parametrised const. seen-
    // Hero raunak(10,'c');
    // cout<<"Address of raunak "<< &raunak<<endl; // print same address as in this
    // raunak.getHealth();

    // //copy of constructor 
    // Hero ori(70, 'c');
    // ori.print();
    // cout<<"after copy same response- "<<endl;
    // Hero copy(ori); //put name of constructor in bracket whose copy have to created. like here ori in copy bracket
    // copy.print();

    // //destructor check
    // Hero a; // in static destructor called automatically but
    // Hero *b = new Hero (); // in dynamically we have to called manually
    // delete b; //  calling destructor manually

    cout<< Hero :: timeToComplete <<endl; // can access without creating object.

    Hero a;
    cout<< a.timeToComplete <<endl; // can access with object.
    return 0;
}