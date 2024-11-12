#include<iostream> 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    vector<int> arr;

    cout << "Enter limit: ";
    cin >> size;

    cout << "Enter val one by one: ";

    for(int i = 0; i < size; i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }

    sort(arr.begin(), arr.end(), greater<>());

    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

    cout << arr[5] << endl;

    return 0;
}