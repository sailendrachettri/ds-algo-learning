#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void palindrome(int digits){

    static int reverse = 0;
    static int copy_digits = digits;

    if(digits == 0){
        cout << copy_digits << " = " << reverse << endl;
        copy_digits == reverse ? cout << "palindrome" << endl : cout << "not palindrom" << endl;
        return;
    }

    reverse = reverse * 10 + (digits%10);

    palindrome(digits/10);
}

int main(){

    int digits;
    cout << "Enter digits: ";
    cin >> digits;


    palindrome(digits);

    return 0; 
}