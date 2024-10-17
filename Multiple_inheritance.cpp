#include <bits/stdc++.h>
using namespace std;

// Class definitions
class Cricketer {
public:
    int runs;
    int wickets;
    double average;
};

class Engineer {
public:
    int experience;
    string domain;
};

// Multiple inheritance: Phodu inherits from both Engineer and Cricketer
class Phodu : public Engineer, public Cricketer {
public:
    string name;

    // A constructor to initialize the Phodu object
    Phodu(string n, int exp, string dom, int r, int w, double avg) {
        name = n;
        experience = exp;
        domain = dom;
        runs = r;
        wickets = w;
        average = avg;
    }
};
int main(){
    
};