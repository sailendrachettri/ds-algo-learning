#include <iostream>
using namespace std;

int main(){

    int first_n;

    cout << "Enter first n: ";
    cin >> first_n;

    for(int num = 1; num <= first_n; num++){
        bool flag = true;

        if(num <= 1)
            continue;

        for(int i = 2; i <= num/2; i++){
            if(num%i == 0)
                flag = false;
        }

        if(flag)
            cout << num << " ";

    }

    cout << endl;

    
    

    return 0;
}