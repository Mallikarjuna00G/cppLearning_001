/**
 * classes:
 * task: Queue Management
 */
#include <iostream>
using namespace std;

class Queue {
    private:
    int size;
    int* queue;

    public:
    Queue() {
        size = 0;
        queue = new int[100];
    }
    void remove() {
        if(size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        else {
            for(int i = 0; i < size - 1; i++) {
                queue[i] = queue[i + 1];
            }
            size--;
        }
    }

    void print() {
        if(size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        for(int i = 0; i < size; i++) {
            cout << queue[i] << " <- ";
        }
        cout << endl;
    }
    void add(int item) {
        if(size >= 99) {
            cout << "Queue is full. Cannot add..." << endl;
            return;
        } else {
            queue[size++] = item;
        }
    }

};

int main() {
    Queue q;
    q.add(42);
    q.add(2);
    q.add(8);
    q.add(1);
    q.print();
    q.remove();
    q.add(128);
    q.print();
    q.remove();
    q.remove();
    q.print();

    return 0;
}