#include <iostream>
using namespace std;

class Queue {
    private:
        int queue_size;
    protected:
        int *buffer;
        int front;
        int rear;
    public:
        Queue();
        Queue(int n);
        ~Queue();
};

Queue::Queue(){ // constructor
    cout << "constructor(void)"<<endl;
    // code...
}
Queue::Queue(int n){ // constructor overload
    cout << "constructor (int)"<<endl;
    // code...
}
Queue::~Queue(void){
    cout << "destructor"<<endl;
    // code...
}

int main(){
    Queue myQueue1(500);
    Queue myQueue2;
    // more code...
    return 0;
}