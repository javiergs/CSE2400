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
    Queue myQueue2(500);
    
    // declare a pointer only
    Queue *myQueue;
    
    // reserve memory for an object
    myQueue = new Queue(500);
    
    // use the object (assuming the methods are defined)
    //myQueue->enqueue(23);
    //myQueue2.enqueue(8);
    
    // delete will call ~Queue();
    delete myQueue;
    
    // no need for delete for object in stack, e.g. delete myQueue2;
    
    return 0;
}