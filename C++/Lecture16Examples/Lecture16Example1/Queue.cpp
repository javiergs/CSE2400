#include <iostream>
using namespace std;
class Queue{
    private:
        int queue_size;
    protected:
        int *buffer;
        int front;
        int rear;
    public:
        Queue(int v){
            cout<<"constructor\n";
        }
        void enqueue(int v){
            cout<<"enqueue\n";
        }
        int dequeue(void){
            cout<<"dequeue\n"; return 5;
        }
};
int main()
{
    Queue q1(5);
    Queue *q2 = new Queue(5);
    
    // Access Object
    q1.enqueue(2);
    q1.enqueue(8);
    
    // Access Object Pointer
    q2->enqueue(25);
    int x = q2->dequeue();
    return 0;
}
