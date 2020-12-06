// pointers to base class
#include <iostream>
using namespace std;
class Figure{
    protected:
        int width, height;
    public:
        void set_values (int a, int b) {width = a; height = b;}
        // try alternating between virtual and non-virtual to see the different outputs
        /*virtual*/ int area () {return 0;} 
};
class Rectangle: public Figure{
    public:
        int area() {return width*height;}
};
class Triangle: public Figure{
    public:
        int area() {return width*height/2;}
};
int main(){
    Rectangle rectangle;
    Triangle triangle;
    Figure * f1 = &rectangle;
    Figure * f2 = &triangle;
    
    f1->set_values (10, 20);
    f2->set_values (30, 40);
    
    cout << rectangle.area() << "\n";
    cout << triangle.area() << "\n";
    
    cout << f1->area() << '\n';
    cout << f2->area() << '\n';
    return 0;
}