#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter a num: ";
    cin >> num;

    if(num&1)
        cout << "Odd" << endl;
    else
        cout << "Even" << endl;

    return 0;
}