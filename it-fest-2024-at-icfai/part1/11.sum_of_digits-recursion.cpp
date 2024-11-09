#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sum_of_digits(int num){
    static int sum = 0;

    if(num == 0){
        cout << "Sum of its digits is: " << sum << endl;
        return;
    }

    sum += num % 10;
    
    sum_of_digits(num/10);
}

int main(){

    int num;
    cout << "Enter num: ";
    cin >> num;

    sum_of_digits(num);


    return 0;
}