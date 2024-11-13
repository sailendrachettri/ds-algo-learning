#include <iostream>
using namespace std;

int main(){

    int digits;
    int sum = 0;

    cout << "Enter digits: ";
    cin >> digits;

    while(digits){
        sum += digits % 10;
        digits /= 10;
    }

    cout << "Ans: " << sum << endl;



    return 0;
}