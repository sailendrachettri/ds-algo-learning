#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void fibbonacci_sequence(int total, int first, int last, int next){

    if(total == 2)
        return;

    next = first + last;
    first = last;
    last = next;

    cout << next << " ";

    fibbonacci_sequence(--total, first, last, next);


}

int main(){

    int total;
    int first = 0, last = 1, next;
    cout << "Total number of fibbonacci: ";
    cin >> total;

    cout << first << " " << last << " ";

    fibbonacci_sequence(total, first, last, next);


    return 0;
}