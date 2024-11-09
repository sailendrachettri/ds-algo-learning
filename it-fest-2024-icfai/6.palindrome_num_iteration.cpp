#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int digits;
    string str_digits = "";
    string copy_str_digits = "";

    cout << "Enter a digits:";
    cin >> digits;

    str_digits = to_string(digits);
    copy_str_digits = str_digits;

    reverse(str_digits.begin(), str_digits.end());

    str_digits == copy_str_digits ? cout << "palindrome" << endl : cout << "not palindrome" << endl;





    return 0; 
}