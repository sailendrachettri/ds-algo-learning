#include <iostream>
using namespace std;

int maxOfTwo(int num1, int num2)
{
    return ((num1 > num2) ? num1 : num2);
}

int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7, -8};

    // size
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxSum = INT8_MIN;
    int curSum;

    for(int start = 0; start < size; start++){
        curSum += arr[start];
        maxSum = maxOfTwo(curSum, maxSum);

        if(curSum < 0){
            curSum = 0;
        }

    }

    cout << "\nmax sub array is " << maxSum << endl;

    return 0;
}