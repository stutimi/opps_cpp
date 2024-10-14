#include<bits/stdc++.h>
using namespace std;

class car {
public:
    string name;
    int peace;
    int seats;
    string type;

    // Default constructor
    car() {}

    // Parameterized constructor
    car(string p, int n, int t, string b) {
        name = p;
        seats = n;
        peace = t;
        type = b;
    }
};

// Function to print car details
void print(car c) {
    cout << c.name << " " << c.peace << " " << c.seats << " " << c.type << endl;
}

// Function to modify car details
void change(car &c) {
    c.name = "Audi A8";
}

int main() {
    // Corrected order of parameters (name, seats, peace, type)
    car c1("City", 8, 7, "Sedan");

    // Print the car details
    print(c1);

    // Modify car name using change function
    change(c1);

    // Print the modified car details
    print(c1);

    return 0;
}
