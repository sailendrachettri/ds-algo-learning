#include <iostream>
#include <map>
using namespace std;

string string_compresson(string &s){

    map<char, int> count_map;

    for(int i = 0; i < s.size(); i++){
        count_map[s[i]]++;
    }

    s = ""; // clear out the previous content

    for(auto it : count_map){
        s.push_back(it.first);
        char temp = '0'+ it.second;
        s.push_back(temp);
        // cout << it.first << " = " << it.second << endl;
    }

    return s;
    
}

int main(){

    string str = "zzaabbbbccdeff";

    string result = string_compresson(str);

    cout << endl << result << endl;

    return 0; 
}