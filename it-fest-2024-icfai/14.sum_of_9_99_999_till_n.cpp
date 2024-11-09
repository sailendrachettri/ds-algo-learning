#include <iostream>
using namespace std;

int main(){

    int size;
    int val = 9, sum = 0;

    cout << "Enter size: ";
    cin >> size;

    for(int i = 0; i < size; i++){
        sum += val;
        val = (val * 10) + 9;
    }

    cout << sum << endl;

    return 0;
}