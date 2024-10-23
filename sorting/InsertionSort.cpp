#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr){
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
}

void insertionSort(vector<int> &arr){
    int size = arr.size();

    for(int i = 1; i < size; i++){
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}

int main(){
    vector<int> arr = {4, 1, 5, 2, 3};
    printArr(arr);

    insertionSort(arr);
    printArr(arr);
    return 0;
}