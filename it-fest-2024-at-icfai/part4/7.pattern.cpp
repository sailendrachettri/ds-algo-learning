#include <iostream>
using namespace std;

int main(){

    int row = 5;

    for(int i = row; i >= 1; i--){
        for(int sp = row; sp >= i; sp--){
            cout << "  ";
        }

        for(int j = 1; j <= (2*i-1); j++){
            cout << i << " ";
        }
        cout << endl;
    }
    for(int i = 2; i <= row; i++){
        for(int sp = row; sp >= i; sp--){
            cout << "  ";
        }

        for(int j = 1; j <= (2*i-1); j++){
            cout << i << " ";
        }
        cout << endl;
    }
    

    

    return 0;
}