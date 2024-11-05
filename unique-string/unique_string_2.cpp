#include <iostream>
#include <vector>
using namespace std;

bool check_for_unique(string &str){
    vector<bool> vec(256, false);

    for(char ch : str){
        if(vec[ch]) return false;

        vec[ch] = true;  
    }

    return true; 
}

int main(){

    string str = "abcd";

    bool result = check_for_unique(str);


    result == 0 ? cout << "not unique" << endl : cout << "unique" << endl;

    return 0;
}