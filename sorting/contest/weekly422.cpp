#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr = {{0, 1}, {1, 2}};
    int time = 0;
    
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[0].size()-1; j++){
            if(j == 0 || i != 0){
                time++;
                time += arr[i][j];
                cout << arr[i][j] << " ";

            }
            else 
                cout << '-' << " ";
        }
        cout << endl;

    }

    cout << time << " " << endl;

    return 0;

}