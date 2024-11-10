#include<iostream>
using namespace std;

int main(){

    int row = 6;
    int val = 1;

    cout << endl << endl;

    for(int i = 1; i <= row; i++){
        for(int j = row; j >= i; j--){
            cout << "* ";
        }

        for(int sp = 1; sp <= i; sp++){
            cout << sp << " ";
        }

        for(int sp = i-1; sp >= 1; sp--){
            cout << sp << " ";
        }

        for(int sp = row; sp >= i; sp--){
            cout << "* ";
        }

        cout << endl;
    }

    for(int i = row-1; i >= 1; i--){
        for(int j = row; j >= i; j--){
            cout << "* ";
        }

        for(int sp = 1; sp <= i; sp++){
            cout << sp << " ";
        }

        for(int sp = i-1; sp >= 1; sp--){
            cout << sp << " ";
        }

        for(int sp = row; sp >= i; sp--){
            cout << "* ";
        }

        cout << endl;
    }


    cout << endl << endl;

    return 0;
}