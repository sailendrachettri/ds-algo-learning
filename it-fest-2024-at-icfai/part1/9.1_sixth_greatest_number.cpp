#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> arr;
    int size, val;

    cout << "Enter the total no of elements: ";
    cin >> size;

    cout << "Enter elements one by one: ";
    for(int i = 0; i < size; i++){
        cin >> val;
        arr.push_back(val);
    }

    sort(arr.begin(), arr.end(), greater<>());

    for(int val : arr) {
        cout << val << " ";
    }

    cout << endl << endl;


    cout << "Ans = " << arr[5] << endl;

    return 0;
}