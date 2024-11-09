#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int> nums;
    vector<int> arr;
    int size;
    int val;
    
    cout << "Enter the total number you want to insert: ";
    cin >> size;
    

    cout << "Enter the total elements one by one: ";
    for(int i = 0; i < size; i++){
        
        cin >> val;
        nums.insert(val);
    }

    for(int it : nums){
        arr.push_back(it);
    }

    sort(arr.begin(), arr.end());

    for(int val : arr){
        cout << val << " ";
    }

    cout << endl;



    cout << arr[5] << endl;

    return 0;
}