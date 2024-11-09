#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void keep_unique(){
    set<int> unique;
    int size, val;

    cout << "Enter a size: ";
    cin >> size;


    cout << "Enter elements: ";
    for(int i = 0; i < size; i++){
        cin >> val;
        unique.insert(val);
    }

    cout << endl << endl << "Ans is ";

    for(int val : unique){
        cout << val << " ";
    }
    cout << endl;
}

int main(){

    keep_unique();

    return 0;
}