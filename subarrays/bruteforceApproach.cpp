#include <iostream>

using namespace std;

int main(){
    int arr[] = {3, -4, 5, 4, -1, 7, -8};

    // size
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxSum = arr[0];
    int curSum = 0;

    // print subarrays
    for(int start = 0; start < size; start++){
        for(int end = start; end < size; end++){
            for(int i = start; i <= end; i++){
                cout << arr[i];
                curSum += arr[i];
            }
            cout << " = " << curSum << endl;

            if(curSum > maxSum){
                maxSum = curSum;
            }

            curSum = 0;
        }
        cout << endl;
    }

    cout << "Max sum is " << maxSum << endl;

}