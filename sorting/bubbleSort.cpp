#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr){
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int> &arr){
    int itr = 0;

    for(int i = 0; i < arr.size(); i++){
        bool flag = false;

        for(int j = 0; j < arr.size()-i-1; j++){
            itr++;

            if(arr[j] > arr[j+1]){
                flag = true;
                swap(arr[j], arr[j+1]);
            }

            if(!flag){
                cout << endl << "itr: " << itr << endl;
                return;
            }
            
        }
    }

    cout << endl << "itr: " << itr << endl;

}

int main(){

    vector<int> nums = {1, 2, 3, 6, 5};
    // vector<int> nums = {4, 1, 5, 2, 3};
    printArr(nums);

    bubbleSort(nums);
    printArr(nums);

    return 0;
}