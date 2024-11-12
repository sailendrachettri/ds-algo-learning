#include<iostream>
using namespace std;

int main(){
    int limit;
    int first = 0;
    int last = 1;
    int next;

    cout << "Enter limit: ";
    cin >> limit;

    cout << first << " " << last << " ";

    for(int i = 2; i <= limit; i++){
        next = first + last;
        cout << next << " ";
        first = last;
        last = next;
    }

    cout << endl;



    return 0;
}