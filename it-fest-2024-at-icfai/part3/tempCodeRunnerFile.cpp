#include<iostream>
using namespace std;

int main(){
    int year = 1999;

    if(year % 400 == 0)
        cout << "Not a leap year" << endl;

    else if(year % 100 == 0)
        cout << "Not a leap year" << endl;

    else if(year % 4 == 0)
        cout << "Leap year" << endl;

    else 
        cout << "Not a leap year" << endl;



    return 0;
}