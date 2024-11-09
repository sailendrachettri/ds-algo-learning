#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int val;
    bool flag = true;

    cout << "Enter a number: ";
    cin >> val;

    string str = to_string(val);

    for(int i = 0; i < str.size(); i++){
        if(str[i] != '0' && str[i] != '1'){
            flag = false;
            break;
        }
    }

    flag ? cout << "Binary" << endl : cout << "Not binary" << endl;

    return 0;
}