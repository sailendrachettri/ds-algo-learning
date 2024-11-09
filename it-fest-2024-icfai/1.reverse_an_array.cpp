#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr;
    int size;

    cout << "Enter size: ";
    cin >> size;

    cout << endl <<"Enter elements: ";
    for(int i = 0; i < size; i++){
        int val;

        cin >> val;
        arr.push_back(val); 
    }

    

  reverse(arr.begin(), arr.end());

  for(int val : arr){
    cout << val << " ";
  }

    cout << endl;



    return 0; 
}