#include<bits/stdc++.h>
using namespace std;
class person{
public :
string favcolor;
string favsubject;
string favprograminglanguage;
};
// call by value
void print(person n){ cout<< n.favcolor<<" "<<n.favsubject<<" "<<n.favprograminglanguage<<endl;}

// call by referance
void change(person &n){
n.favcolor = "Red";
n.favsubject = "Chemistry";
n.favprograminglanguage = "Java";
}
int main(){
person stuti;
stuti.favcolor = "Black";
stuti.favsubject = "Mathematics";
stuti.favprograminglanguage = "C++";
person khushi;
khushi.favcolor = "White";
khushi.favsubject = "Physics";
khushi.favprograminglanguage = "Javascript";
person barbie;
barbie.favcolor = "Blue";
barbie.favsubject = "English";
barbie.favprograminglanguage = "CSS";
print ( stuti);
change ( stuti);
print ( stuti);
print ( khushi);
print ( barbie);
}