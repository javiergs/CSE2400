#include <iostream>
using namespace std;
#define size 4
class arrayObject{
    public:
        int x; double y;
        arrayObject() {cout << "arrayObject's constructor called" << endl;}
        ~arrayObject(){cout << "arrayObject's destructor called"  << endl;}
};

int main(){
    arrayObject *p, *q; // declare two pointers
    p = new arrayObject[size]; // create an array of objects
    for (q = p; q < p + size; q++){ // initialize the objects
        q->x = 10; q->y = 1.5;
    }
    for (q = p; q < p + size; q++){
        cout << "Element address " << q << "Element x value: " << q->x << endl;
        cout << "Element address " << q << "Element y value: " << q->y << endl;
    }
    delete[] p;
    return 0;
}