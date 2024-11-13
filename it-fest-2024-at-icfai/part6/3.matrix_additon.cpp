#include<iostream>
using namespace std;

#define MAX 50

int main(){

    int a[MAX][MAX], b[MAX][MAX], res[MAX][MAX];
    int arows, acols, brows, bcols;
    int sum = 0;

    cout << "Size of a matrix a: ";
    cin >> arows >> acols;

    cout << "Enter the elements for matrix a: " << endl;

    for(int i = 0; i < arows; i++){
        for(int j = 0; j < acols; j++){
            int val;
            cin >> val;
            a[i][j] = val;
        }
    }

    

    cout << "Size of a matrix b: ";
    cin >> brows >> bcols;

    cout << "Enter the elements for matrix b: " << endl;

    for(int i = 0; i < brows; i++){
        for(int j = 0; j < bcols; j++){
            int val;
            cin >> val;
            b[i][j] = val;
        }
    }

    // calculate sum

    for(int i = 0; i < arows; i++){
        for(int j = 0; j < acols; j++){
            res[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Answer: " << endl;

    for(int i = 0; i < arows; i++){
        for(int j = 0; j < acols; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    

    return 0;
}