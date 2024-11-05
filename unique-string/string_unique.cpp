#include <iostream>
#include <unordered_map>
using namespace std;

bool check_for_unique(string &str){
    int size = str.size();
    unordered_map<char, int> mp;

    for(int i = 0; i < size; i++){
        mp[str[i]]++;
    }

    for(auto i : mp){
        if(i.second >= 2) return false;
        cout << i.first << " = " << i.second << endl;
    }

    return true;
}

int main(){
    string str = "abcda";

    bool result = check_for_unique(str);


    result == 0 ? cout << "not unique" <<endl : cout << "unique" << endl;

    return 0;
}