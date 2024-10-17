#include <bits/stdc++.h>
using namespace std;
class MyVector {
    int size;
    int capacity;
    int* arr;

public:
    // Constructor
    MyVector() {
        size = 0;
        capacity = 1;
        arr = new int[capacity];
    }

    ~MyVector() {
        delete[] arr;
    }

    void push_back(int value) {
        if (size == capacity) {
            // Increase capacity and create a new array
            capacity *= 2;
            int* temp = new int[capacity];
            for (int i = 0; i < size; i++) {
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;
        }
        arr[size] = value;
        size++;
    }

    // Function to display elements (just for testing)
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Creating an object of MyVector class
    MyVector v1;

    // Adding elements and displaying them
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    v1.display(); // Output: 10 20 30

    return 0;
}
