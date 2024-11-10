#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {1, 4, 5, 100, 3, 7, 8, 9 ,10, 44, 12, 100, 5, 7, 8, 9, 10, 1};
    int size = arr.size();

    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i] == arr[j])
                cout << arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
}