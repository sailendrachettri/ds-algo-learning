#include <iostream>
using namespace std;

int main(){

    int row = 5;

    for(int i = 1; i <= row; i++){
        for(int sp = row; sp >= i; sp--){
            cout << "  ";
        }
        
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        for(int j = i-1; j >= 1; j--){
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}