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
    void print(int runs){
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
        cout<<runs<<endl;
    }
};
int main(){
    criketer c1("Dhoni", 16000, 55.4);
    criketer c2("Virat", 16000, 45.5);
    c1.print(5);
    cout<<c1.runs<<endl;
    c2.print(7);
    return 0;
}
