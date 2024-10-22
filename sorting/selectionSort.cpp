#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr){
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
}

void selectionSort(vector<int> &arr){
    int size = arr.size();

    for(int i = 0; i < size-1; i++){
        int smallIndex = i;

        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[smallIndex]){
                smallIndex = j;
            }
        }

        swap(arr[i], arr[smallIndex]);
    }
}

int main(){
    
    vector<int> nums = {4, 1, 5, 2, 3};
    printArr(nums);

    selectionSort(nums);
    printArr(nums);

    return 0;
}