#include<iostream>
using namespace std;

int main(){

    int limit;
    int t = 9, sum = 0;
    cout << "Enter limit: ";
    cin >> limit;


    for(int i = 1; i <= limit; i++){
        sum += t;
        t = (t * 10) + 9;
    }

    cout << (9 + 99 + 999) << endl;

    cout << sum << endl;


    return 0;
}