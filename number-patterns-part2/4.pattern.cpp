#include<iostream>
using namespace std;

int main(){

    cout << endl << endl;

    int row = 6;

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }

        for(int j = row; j > i; j--){
            cout << i << " ";
        }


        for(int j = row; j >= i; j--){
            cout << i << " ";
        }


        for(int j = 1; j <= i; j++){
            cout << "* ";
        }

        cout << endl;
    }

    cout << endl << endl;


    return 0;
}