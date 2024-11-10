#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "sailendra";
    char ch = 'r';

    string ans = "";

    cout << str << endl;

    for(int i = 0; i < str.size(); i++){
        if(str[i] != ch)
            ans += str[i];
    }


    cout << ans << endl;

    return 0;
}