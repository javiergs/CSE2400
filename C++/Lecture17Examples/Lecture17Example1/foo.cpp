#include <iostream>
using namespace std;

class Foo{
    public:
        void counting();
        int getCounterB();
        static int counterA;
    private:
        int counterB;
};
// initial value to static member variable
int Foo::counterA = 0;

int counter = 0;

void Foo::counting(){ // set a new mil Time
    counterA++;
    counterB++;
}
int Foo::getCounterB(){
    return counterB;
}
int main(){
    Foo f1, f2, f3;
    f1.counting();
    f2.counting();
    f3.counting();
    f3.counting();
    cout << Foo::counterA<<endl;
    cout << f1.getCounterB()<<endl;
    cout << Foo::counterA<<endl;
    cout << f2.getCounterB()<<endl;
    return 0;
}