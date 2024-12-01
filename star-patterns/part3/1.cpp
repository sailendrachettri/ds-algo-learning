#include<iostream>
using namespace std;

int main(){

    int rows = 5;

    for(int i = 0; i <= rows; i++){
        for(int j = 0; j < i; j++){
            cout << char('A'+rows+j-i)<< " ";
        }
        cout << endl;
    }

    // for(int i = 1; i <= rows; i++){
    //     for(int sp = rows; sp >= i; sp--){
    //         cout << " ";
    //     }

    //     for(int j = 0; j < i; j++){
    //         cout << char('A'+j);
    //     }
    //     for(int j = i-1; j >= 1; j--){
    //         cout << char('A'+j-1);
    //     }
    //     cout << endl;
    // }



    // for(int i = 0; i <= rows; i++){
    //     for(int j = 0; j <= i; j++){
    //         cout << char('A'+i);
    //     }
    //     cout << endl;
    // }




    // char val = 'A';
    // for(int i = rows; i >= 0; i--){
    //     for(int j = 0; j <= i; j++){
    //         cout << char(val+j);
    //     }
    //     cout << endl;
    // }


    // char val = 'A';
    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j <= i; j++){
    //         cout << char(val+j);
    //     }
    //     cout << endl;
    // }



    // int val = 1;
    // for(int i = 1; i <= rows; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << val++ << " ";
    //     }
    //     cout << endl;
    // }


    // for(int i = 1; i < rows; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << j;
    //     }

    //     for(int sp = rows; sp > i+1; sp--){
    //         cout << "  ";
    //     }

    //     for(int j = i; j >= 1; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }




    // for(int i = 0; i < rows; i++){
        
    //     for(int j = 0; j <= i; j++){
    //         if(i%2 == 0){
    //             if(j%2 == 0) cout << 1 << " ";
    //             else cout << 0 << " ";
    //         }
    //         else if(i%2 == 1){
    //             if(j%2 == 0) cout << 0 << " ";
    //             else cout << 1 << " ";
    //         }
    //     }
    //     cout << endl;
    // }


    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j <= i; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for(int i = rows-2; i >= 0; i--){
    //     for(int j = 0; j <= i; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }








    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j <= i; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }







    // for(int i = 1; i <= rows; i++){
    //     for(int sp = rows; sp >= i; sp--){
    //         cout << "  ";
    //     }
    //    for(int j = 1; j <= (2*i-1); j++){
    //     cout << "* ";
    //    }
    //    cout << endl;
    // }
    // for(int i = rows-1; i >= 1; i--){
    //     for(int sp = rows; sp >= i; sp--){
    //         cout << "  ";
    //     }
    //    for(int j = 1; j <= (2*i-1); j++){
    //     cout << "* ";
    //    }
    //    cout << endl;
    // }











    // for(int i = 1; i < rows; i++){
    //     for(int sp = rows; sp >= i; sp--){
    //         cout << "  ";
    //     }
    //    for(int j = 1; j <= (2*i-1); j++){
    //     cout << "* ";
    //    }
    //    cout << endl;
    // }






    // for(int i = 1; i <= rows; i++){
    //     for(int j = 1; j <= rows-i-1; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }









    // for(int i = rows; i >= 1; i--){
    //     for(int j = i; j >= 1; j-- ){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }






    // for(int i = 1; i <= rows; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }















    // for(int i = 1; i <= rows; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

















    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j <= i; j++){
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }







    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < rows; j++){
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    return 0;
}