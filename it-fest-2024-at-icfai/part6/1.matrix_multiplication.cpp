#include<iostream>
using namespace std;

#define MAX 50

int main(){
    int a[MAX][MAX];
    int b[MAX][MAX];
    int res[MAX][MAX];

    int arows, acols, brows, bcols;
    int sum = 0;

    cout << "Enter size of matrix a: ";
    cin >> arows >> acols;

    cout << "Enter value for matrix a: " << endl;

    for(int i = 0; i < arows; i++){
        for(int j = 0; j < acols; j++){
            int val;
            cin >> val;
            a[i][j] = val;
        }
    }
    cout << "Enter size of matrix b: ";
    cin >> brows >> bcols;

    cout << "Enter value for matrix b: " << endl;

    for(int i = 0; i < brows; i++){
        for(int j = 0; j < bcols; j++){
            int val;
            cin >> val;
            b[i][j] = val;
        }
    }

    for(int i = 0; i < arows; i++){
        for(int j = 0; j < bcols; j++){
            for(int k = 0; k < bcols; k++){
                sum += a[i][k] * b[k][j];
            }
            res[i][j] = sum;
            sum = 0;
        }
    }

    cout << "Result of matrix a * b: " << endl;

    for(int i = 0; i < arows; i++){
        for(int j = 0; j < acols; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }




    return 0;
}