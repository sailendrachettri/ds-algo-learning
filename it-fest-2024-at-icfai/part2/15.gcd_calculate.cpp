#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 98, b = 56;

    cout << __gcd(a, b) << endl; // gcd
    cout << (a*b) / __gcd(a, b) << endl; // lcm

    return 0;
}