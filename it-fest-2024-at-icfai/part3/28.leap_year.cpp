#include<iostream>
using namespace std;

int main(){
    int year = 2004;

    if(year % 400 == 0 || year % 4 == 0)
        cout << "Leap year" << endl;

    else if(year % 100 == 0)
        cout << "Not a leap year" << endl;

    else 
        cout << "Not a leap year" << endl;



    return 0;
}