#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int first = 1;
    int last = 1;
    int next;
    int total;

    cout << "Total number of sequence: ";
    cin >> total;

    cout << first << " " << last << " ";

    for(int i = 1; i <= total; i++){
        next = first + last;

        first = last;
        last = next;

        cout << next << " ";
    }

    cout << endl;

    return 0;
}