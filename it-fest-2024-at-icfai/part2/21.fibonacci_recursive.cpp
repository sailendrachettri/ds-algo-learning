#include<iostream>
using namespace std;

void recFib(int num){
    static int first = 0;
    static int last = 1;
    static int next;

    if(num == 0)
        return;

    next = first + last;
    first = last;
    last = next;

    cout << next << " ";

    recFib(--num);
}

int main(){

    int num;
    cout << "Enter limit: ";
    cin >> num;

    cout << "0 " << "1 ";

    recFib(num);

    return 0;
}