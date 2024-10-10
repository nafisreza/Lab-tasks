using namespace std;
#include <iostream>
#include "CircularQueue.h"

int main() {

    CircularQueue<int> queue(5);

    cout << "Is the queue empty? " << queue.empty() << endl;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    queue.show();

    cout << "Front element: " << queue.front() << endl;
    cout << "Queue size: " << queue.size() << endl;


    queue.enqueue(5);
    queue.show();


    cout << "Dequeued element: " << queue.dequeue() << endl;
    queue.show();

    cout << "Dequeued element: " << queue.dequeue() << endl;
    queue.show();


    cout << "Front element after dequeuing: " << queue.front() << endl;
    cout << "Queue size after dequeuing: " << queue.size() << endl;

    return 0;
}