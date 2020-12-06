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
    buffer = NULL;
}
Queue::Queue(int n){ // constructor overload
    cout << "constructor (int)"<<endl;
    // code...
    queue_size = n;
    buffer = new int[queue_size];
}
Queue::~Queue(void){
    cout << "destructor"<<endl;
    // code...
    delete [] buffer;
}

int main(){
    Queue myQueue1(500);
    Queue myQueue2;
    Queue *myQueue3 = new Queue(100);
    // more code...
    delete myQueue3;
    return 0;
}