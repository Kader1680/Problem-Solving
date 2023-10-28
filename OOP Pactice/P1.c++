// concept of probelm
// Write a program that defines a shape class with a constructor 
// that gives value to width and height. The define two sub-classes Rectangle 
// that calculate the area of the shape area (). In the main, 
// define two variables a triangle 
// and a rectangle and then call the area() function in this two varibles.


#include <iostream>
using namespace std;
class Shape{
    private:
        int width, height;
    public:
        Shape(){
            width, height = 0;
        }
        void setWidth(int w){
            width = w;
        }
        int getWidth(){
            return width;
        }
        void setHeight(int h){
            height = h;
        }
        int getHeight(){
            return height;
        }
};
class Ractangle: public Shape{
        private:
        int width, height;
     public:
       void setWidth(int wR){
            width = wR;
        }
        int getWidth(){
            return width;
        }
        void setHeight(int h){
            height = h;
        }
        int getHeight(){
            return height;
        }
        int area(){
            return width * height;
        }
};
int main() {
    
Ractangle r;
r.setWidth(2);
r.setHeight(3);
cout<<"the Area of the reactangle is"<<r.area();
    return 0;
}





