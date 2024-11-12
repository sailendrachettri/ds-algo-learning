#include<iostream>
#include <set>
using namespace std;

int main(){

    int size;
    set<int> unq;
    cout << "Enter size: ";
    cin >> size;

    cout << "Enter elements: ";
    for(int i = 0; i < size; i++){
        int val;
        cin >> val;
        unq.insert(val);
    }

    for(int val : unq){
        cout << val << " ";
    }

    cout << endl;

    return 0;
}