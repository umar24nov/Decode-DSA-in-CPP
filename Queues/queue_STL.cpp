#include <iostream>
#include <queue> 
using namespace std;

class Queue {
public:
    queue<int> q;

    void enqueue(int val) {
        q.push(val); // Push to the back of the queue
    }

    void dequeue() {
        if (q.empty()) {
            cout << "Queue is already empty!" << endl;
        } else {
            q.pop(); // Remove the front element
        }
    }

    int getFront() {
        if (q.empty()) return -1; // Return -1 if queue is empty

        return q.front(); // Get the front element
    }

    bool isEmpty() {
        return q.empty(); // Check if the queue is empty
    }

    void display() {
        if (q.empty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        queue<int> temp = q;
        while (!temp.empty()) {
            cout << temp.front() << " "; // Print front element
            temp.pop(); // Remove front element from temporary queue
        }
        cout << endl;
    }
};

int main() {
    Queue qu;
    cout << "Is the queue empty: " << boolalpha << qu.isEmpty() << endl;

    qu.enqueue(50);
    qu.enqueue(60);
    qu.enqueue(70);
    qu.enqueue(80);
    cout << "Contents of queue: ";
    qu.display();

    qu.dequeue();
    cout << "Queue after one dequeue: ";
    qu.display();

    qu.enqueue(90);
    cout << "Queue after enqueuing 90 : ";
    qu.display();

    return 0;
}
