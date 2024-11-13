#include <iostream>
using namespace std;

int main(){

    int row = 4;
    int val = row+1;

    for(int i = 1; i <= row; i++){
        for(int sp = row; sp >= i; sp--){
            cout << "  ";
        }

        for(int j = 1; j <= (2*i-1); j++){
            cout << i << " ";
        }
        cout << endl;
    }

     for(int i = row-1; i >= 1; i--){
        for(int sp = row; sp >= i; sp--){
            cout << "  ";
        }

        for(int j = 1; j <= (2*i-1); j++){
            cout << val << " ";
        }
        val = val + 1;
        cout << endl;
    }

    return 0;
}