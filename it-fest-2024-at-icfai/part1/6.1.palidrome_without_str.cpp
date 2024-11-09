#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int digits;
    int copy_digits;
    int reverse = 0;
    cout << "Enter digits: ";
    cin >> digits;

    copy_digits = digits;

    while(copy_digits){
        reverse = (reverse * 10) + (copy_digits % 10);
        copy_digits = copy_digits / 10;
    }

    cout << digits <<  " = " << reverse << endl;

    digits == reverse ? cout << "palindrome" << endl : cout << "Not palindrome" << endl;




    return 0; 
}