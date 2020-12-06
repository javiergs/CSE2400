#include <iostream>
#include <cmath>
using namespace std;

class Cylinder{
    private:
        double radius, height;
    public:
        double getVolume(void){
            // M_PI defined in <cmath>
            return M_PI * radius * radius * height;
        }
        void setRadius(double r){
            radius = r;
        }
        void setHeight(int h){
            height = h;
        }
        // Overload + operator to add two Cylinder objects
        Cylinder operator+(Cylinder &c){
            Cylinder cylinder;
            cylinder.radius = this->radius + c.radius;
            cylinder.height = this->height + c.height;
            return cylinder;
        }
        // Overload - operator to subtract two Cylinder objects
        Cylinder operator-(Cylinder &c){
            Cylinder cylinder;
            cylinder.radius = this->radius - c.radius;
            cylinder.height = this->height - c.height;
            return cylinder;
        }
        // Overload > operator (greater than that of two Cylinder objects)
        bool operator>(Cylinder &c){
            Cylinder cylinder; double vol0, vol1;
            vol0 = this->getVolume();
            vol1 = c.getVolume();
            if(vol0 > vol1) return true;
            else return false;
        }
};

int main(){
    Cylinder cylinder1, cylinder2, cylinder3;
    double volume = 0.0;
    // cylinder1 and cylinder2 initialization
    cylinder1.setRadius(5.0); cylinder1.setHeight(5.0);
    cylinder2.setRadius(4.0); cylinder2.setHeight(10.0);
    // get and print volumes of cylinder1 and cylinder2
    volume = cylinder1.getVolume();
    cout << "Volume of cylinder1 : " << volume << endl;
    volume = cylinder2.getVolume();
    cout << "Volume of cylinder2 : " << volume << endl;
    // Add two objects using overloaded operator +, and get and print volume
    cylinder3 = cylinder1 + cylinder2;
    volume = cylinder3.getVolume();
    cout << "Volume of cylinder3 : " << volume << endl;
    // subtract two objects as follows:
    cylinder3 = cylinder1 - cylinder2;
    // get and print volume of cylinder3
    volume = cylinder3.getVolume();
    cout << "Volume of cylinder3 : " << volume << endl;
    if(cylinder1 > cylinder2) // using overloaded operator >
        cout << "cylinder1 volume is greater than cylinder2 volume" << endl;
    else cout << "cylinder1 volume is not greater than cylinder2 volume" << endl;
    return 0;
}