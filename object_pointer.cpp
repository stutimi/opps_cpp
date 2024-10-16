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
    int x = 4;
    cout<<&x<<endl;
    int *ptr = &x;
cout<<ptr<<endl;
cout<<*ptr<<endl;
*ptr = 100;
cout<<x<<endl;
}
