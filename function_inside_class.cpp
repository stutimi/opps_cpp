#include<bits/stdc++.h>
using namespace std;
class criketer{
public:
    string name;
    int runs;
    float avg;
    // Constructor to initialize the members
    criketer(string name, int runs ,float avg) {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
    void print(){
        cout<<name<<" "<<runs<<" "<<avg<<endl;
    }
};
int main(){
    criketer c1("Dhoni", 16000, 55.4);
    criketer c2("Virat", 16000, 45.5);
    c1.print();
    c2.print();
    return 0;
}