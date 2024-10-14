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
car(string p, int n) {
        name = p;
        seats = n;
       
    }
    car(int t, int n) {
        peace = t;
        seats = n;
       
    }

};

int main() {
    // Corrected order of parameters (name, seats, peace, type)
    car c1("City", 8, 7, "Sedan");
    car c2("City",6);
    car c3(3,6);
 car c4 = c1 ;
 c4.name = "raj"; // Deep copy
 car c5(c1); //Constructor copy
 cout<<c1.name<<" "<<c1.peace<<" "<<c1.seats<<" "<<c1.type<<endl;
cout<<c2.name<<" "<<c2.peace<<endl;
cout<<c2.seats<<" "<<c2.peace<<endl;
cout<<c4.name<<" "<<c4.peace<<" "<<c4.seats<<" "<<c4.type<<endl;
cout<<c5.name<<" "<<c5.peace<<" "<<c5.seats<<" "<<c5.type<<endl;
}
