using namespace std;
#include <iostream>

template <typename T>
class CircularQueue {
public:
    CircularQueue(int cap = 5) : capacity(cap), q_size(0), ifront(0), iback(-1) {
        arr = new T[capacity];
    }

    bool empty() const {
        return q_size == 0;
    }

    int size() const {
        return q_size;
    }

    T front() const {
        if (empty()) {
            cout << "Queue is empty" << endl;
        }
        return arr[ifront];
    }

    void enqueue(T value) {
        if (q_size == capacity) {
            cout << "Queue is full" << endl;
        }
        iback = (iback + 1) % capacity;
        arr[iback] = value;
        q_size++;
    }

    T dequeue() {
        if (empty()) {
            cout << "Queue is empty" << endl;
        }
        T value = arr[ifront];
        ifront = (ifront + 1) % capacity;
        q_size--;
        return value;
    }

    void show() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i = ifront;
        int count = 0;
        while (count < q_size) {
            cout << arr[i] << " ";
            i = (i + 1) % capacity;
            count++;
        }
        cout << endl;
    }

private:
    int q_size;
    int capacity;
    int ifront;
    int iback;
    T* arr;
};