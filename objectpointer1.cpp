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
    int matches(){
        return runs/avg;
    }
};
int main(){
    criketer c1("Dhoni", 16000, 55.4);
    criketer c2("Virat", 16000, 45.5);
    criketer* ptr = &c1;
    cout<<(*ptr).name<<endl;
    (*ptr).avg = 60.5;
    cout<<c1.avg<<endl;
    return 0;
}
