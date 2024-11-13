#include <iostream>
using namespace std;

int main(){

    int table_of;

    cout << "Enter num: ";
    cin >> table_of;

    cout << endl;

    for(int i = 1; i <= 12; i++){
        cout << table_of << " X " << i << " = " << table_of * i << endl;
    }

    

    return 0;
}