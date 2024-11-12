#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string str, str_copy;

    cout << "Enter a string: ";
    cin >> str;

    str_copy = str;

    reverse(str.begin(), str.end());

    if(str == str_copy){
        cout << "palindrome" << endl;
    } else {
        cout << "Not palindrome" << endl;
    }
    
    


    return 0;
}