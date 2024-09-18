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

    // print subarrays
    for (int start = 0; start < size; start++)
    {
        curSum = 0;
        for (int end = start; end < size; end++)
        {

            curSum += arr[end];
            maxSum = maxOfTwo(curSum, maxSum);
        }
    }

    cout << "Max sum is " << maxSum << endl;
}