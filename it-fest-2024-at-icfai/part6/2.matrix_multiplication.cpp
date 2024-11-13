#include<iostream>
using namespace std;

#define MAX 50

int main(){

    int a[MAX][MAX], b[MAX][MAX], res[MAX][MAX];
    int arows, acols, brows, bcols;
    int sum = 0;

    cout << "Enter the size of matrix a(rows X cols): ";
    cin >> arows >> acols;

    cout << "Enter elements for matrix a: " << endl;

    for(int i = 0; i < arows; i++){
        for(int j = 0; j < acols; j++){
            int val;
            cin >> val;
            a[i][j] = val;
        }
    }

    cout << "Enter the size of matrix b(rows X cols): ";
    cin >> brows >> bcols;

    cout << "Enter elements for matrix b: " << endl;

    for(int i = 0; i < brows; i++){
        for(int j = 0; j < bcols; j++){
            int val;
            cin >> val;
            b[i][j] = val;
        }
    }

    // multiplication

    for(int i = 0; i < arows; i++){
        for(int j = 0; j < acols; j++){
            for(int k = 0; k < acols; k++){
                sum += a[i][k] * b[k][j];
            }
            res[i][j] = sum;
            sum = 0;
        }
    }

    cout << "Answer: " << endl;

    for(int i = 0; i < acols; i++){
        for(int j = 0; j < bcols; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}