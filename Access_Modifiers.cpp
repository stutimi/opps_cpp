#include<bits/stdc++.h>

using namespace std;
class student{
public:
int rno;
string name;
float marks;
};
int main9(){
    student s1;
    s1.rno=1;
    s1.name="John";
    s1.marks=85.5;
    cout<<"Student Details:\n";
    cout<<"Roll No.: "<<s1.rno<<"\n";
    cout<<"Name: "<<s1.name<<"\n";
    cout<<"Marks: "<<s1.marks<<"\n";
    return 0;
}