/*
replace the space with %20

Example:
    str = "   I am     a good coder     "
    output = "I%20am%20good%20coder";
*/

#include <iostream>
#include <string>
using namespace std;

void replaceCh(string &s){
    string ans = "";

    int start = 0;
    int end = s.size() - 1;


    while(s[start] == ' '){
        start++;
    }

    while(s[end] == ' '){
        end--;
    }

    while(start <= end){
        if(s[start] != ' '){
            ans += s[start++];
        }
        
        if(s[start] == ' ' && start < end){
            ans += "%20";

            while(s[start] == ' '){
                start++;
            }
        }
       
    }

    s = ans;
}

int main(){

    string str = "   I am     a good coder     ";

    replaceCh(str);

    cout << endl << str << endl;



    return 0;
}