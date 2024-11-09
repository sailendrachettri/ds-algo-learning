#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main(){
    
    int digit, exp;
    int copy_digit;
    int copy_digit2;
    long long sum = 0;


    cout << "Enter a digit: ";
    cin >> digit;

    copy_digit = digit;
    copy_digit2 = digit;

    while(digit){
        digit = digit / 10;
        exp++;
    }

    while(copy_digit){
        sum += pow(copy_digit%10, exp);
        copy_digit = copy_digit / 10;
    }

    cout << sum << endl;

    copy_digit2 == sum ? cout << "true" << endl : cout << "false" << endl;

    return 0;
}