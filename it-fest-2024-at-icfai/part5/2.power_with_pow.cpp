#include <iostream>
using namespace std;

int main(){

    int base, exp;
    int ans;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exp: ";
    cin >> exp;

    ans = base;

    for(int i = 1; i < exp; i++){
        ans = ans * base;
    }

    cout << "Answer: " << ans << endl;


    

    return 0;
}