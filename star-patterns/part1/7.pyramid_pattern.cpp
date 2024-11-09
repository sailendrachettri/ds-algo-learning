#include <iostream>
using namespace std;

int main(){

    int row = 5;

   for(int i = 1; i <= row; i++){
        for(int sp = row; sp >= i; sp--){
            cout << "  ";
        }

        for(int j = 1; j <= (2 * i-1); j++){
            cout << "* ";
        }

        cout << endl;
   }

    return 0;
}