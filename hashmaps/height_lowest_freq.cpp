#include<iostream>
#include<vector>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {11, 3, 2,2,2,4, 4, 4, 1, 1, 2, 0, 6, 0, 5, 913, 13, 13, 13, 3, 3, 1, 5, 6};
    unordered_map<int, int> freq;

    int highFreq = INT_MIN, lowFreq = INT_MAX;
    int highFreqKey, lowFreqKey;

    for(int i = 0; i < arr.size(); i++){
        freq[arr[i]]++;
    }

    for(auto it : freq){
            cout << it.first << " = " << it.second << endl;
        if(it.second > highFreq){
            highFreq = it.second;
            highFreqKey = it.first;
        }

        if(it.second < lowFreq){
            // cout << it.first << " = " << it.second << endl;
            lowFreq = it.second;
            lowFreqKey = it.first;
        }
    }

    cout << "highFreq : " << highFreqKey << endl << "lowFreq: " << lowFreqKey << endl;



    
    return 0;
}