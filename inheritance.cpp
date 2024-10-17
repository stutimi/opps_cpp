#include<bits/stdc++.h>

using namespace std;
class scooty{
public:
int topspeed;
float mileage;};
class Bike : public scooty{

public:
int gears;
};
int main(){
    Bike b;
    b.topspeed = 120;
    b.mileage = 20;
    b.gears = 6;
    cout << "Top speed of bike is " << b.topspeed << endl;
    cout << "Mileage of bike is " << b.mileage << endl;
    cout << "Number of gears of bike is " << b.gears << endl;
    return 0;
}