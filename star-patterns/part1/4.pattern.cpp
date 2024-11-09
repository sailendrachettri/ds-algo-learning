#include <iostream>
using namespace std;

int main(){

    int row = 10;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < row; j++){
            if(i == 0 || j == 0 || i == row-1 || j == row-1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}