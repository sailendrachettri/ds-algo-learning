#include<iostream>
using namespace std;

int main(){

    int num = 3456;

    cout << num << endl;

    int rev  = 0;

    while(num){
        rev = rev * 10 + num%10;
        num /= 10;
    }

    cout << rev << endl;

    return 0; 
}