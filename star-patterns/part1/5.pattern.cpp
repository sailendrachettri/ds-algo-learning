#include <iostream>
using namespace std;

int main(){

    int row = 5;

   for(int i = row; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
   }

    return 0;
}