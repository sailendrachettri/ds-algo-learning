/*
replace the space with %20

Example:
    str = "I am good coder";
*/

#include <iostream>
#include <string>
using namespace std;

void replaceCh(string &s){
    string ans = "";

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            ans += "%20";
            continue;
        }
        ans += s[i];
    }

    s = ans;
}

int main(){

    string str = "this is good";

    replaceCh(str);

    cout << str << endl;



    return 0;
}