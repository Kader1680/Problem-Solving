// Write a program with a mother class and an inherited daugther class.
// Both of them should have a method void display ()that prints a message 
// (different for mother and daugther).
// In the main define a daughter and call the display() method on it.


#include <iostream>
using namespace std;

class Mother{
    public :
    void display(){
        cout<<"this is from mother class";
    }  
};

class Dauther: public Mother{
    public:
    void display(){
        cout<<"this is from Dauther class";
    }
};
int main() {
    Mother m;
    m.display();
    cout<<endl;
    Dauther d;
    d.display();
    
   
    return 0;
}