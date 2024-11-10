#include<iostream>
using namespace std;

int main(){

    int row = 6;

    cout << endl << endl;

    for(int i = 1; i <= row; i++){
        for(int j = row; j >= i; j--){
            cout << "* ";
        }

        for(int sp = 1; sp <= i; sp++){
            cout << sp <<" ";
        }

        for(int sp = i-1; sp >= 1; sp--){
            cout << sp << " ";
        }

        for(int j = row; j >= i; j--){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << endl;

    return 0;
}