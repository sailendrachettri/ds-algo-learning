#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    // prime or not
    int num;
    bool flag = true;

    cout << "Enter a number: ";
    cin >> num;

    if(num <= 1) {
        cout << "Not prime" << endl;
        return 0;
    }


    for(int i = 2; i <= num/2; i++){
        if(num%i == 0) flag =  false;
    }

    flag ? cout << "Prime" << endl : cout << "Not prime" << endl;

    return 0;
}