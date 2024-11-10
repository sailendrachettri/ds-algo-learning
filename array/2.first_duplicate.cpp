#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> arr = {1, 4, 15, 3, 35, 14, 8, 9, 10, 14, 5};

    int size = arr.size();

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] == arr[j]){
                cout << "First duplicate is " << arr[i] << endl;
                return 0;
            }
        }
    }

    return 0;
}