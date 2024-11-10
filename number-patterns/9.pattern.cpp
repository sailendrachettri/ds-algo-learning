#include <iostream>
using namespace std;

int main(){

    int row = 5;

    for(int i = row; i >= 1; i--){
        int val = 5;
        for(int j = i; j >= 1; j--){
            cout << val-- << " ";
        }
        cout << endl;
    }

    return 0;
}