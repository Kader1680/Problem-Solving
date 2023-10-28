// concept of probelm
// Write a program that defines a shape class with a constructor 
// that gives value to width and height. The define two sub-classes Rectangle 
// that calculate the area of the shape area (). In the main, 
// define two variables a triangle 
// and a rectangle and then call the area() function in this two varibles.


#include <iostream>
using namespace std;
class Shape{
    public:
     int width, height;
        void setdata(int w, int h){
            width = w;
            height = h;
        }
};
class Ractangle: public Shape{
     public:
        float area(){
            return width * height;
        }
};
class Triangle : public Shape{
     public:
        float area(){
            return (width * height) / 2;
        }
};
int main() {
// inizialise the area of reactangle    
Ractangle r;
r.setdata(2, 4);
// inizialisz the area of triangle
Triangle t;
t.setdata(4, 6);
cout<<"the Area of the reactangle is "<<r.area()<<endl;
cout<<"the Area of the triangle is "<<t.area()<<endl;
    return 





