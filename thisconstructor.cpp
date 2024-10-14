#include<bits/stdc++.h>
using namespace std;

class cricketer {
    public:
    string name;
    int runs;
    float avg;

    // Constructor to initialize the members
    cricketer(string name, int runs ,float avg) {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};

int main() {
    // Creating objects using the constructor
    cricketer c1("Dhoni", 16000, 55.4);
    cricketer c2("Virat", 16000, 45.5);
    
    // Output the cricketer names and their runs
    cout << c1.name << " " << c2.name <<" "<<c1.avg<< " " << endl;
    cout << c1.runs << " " << c2.runs <<" "<<c2.avg<< " " <<endl;

    return 0;
}
