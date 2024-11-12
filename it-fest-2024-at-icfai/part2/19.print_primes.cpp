#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter a total numbers: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        bool flag = true;

        if(i <= 1)
            i = 2;

        for(int j = 2; j <= i/2; j++){
            if(i%j == 0){
                flag = false;
            }
        }

        if(flag)
            cout << i << " ";
    }

    cout << endl;

    return 0;
}