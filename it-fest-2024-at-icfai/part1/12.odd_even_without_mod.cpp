#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    num & 1 ? cout << "Odd" << endl : cout << "Even" << endl;

    return 0; 
}