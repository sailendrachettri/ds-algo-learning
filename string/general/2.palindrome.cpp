#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    string str = "1010101";
    string str_copy = str;

    reverse(str.begin(), str.end());

    str == str_copy ? cout << "palindrom" << endl : cout << "Not palindrome" << endl;

    return 0;
}