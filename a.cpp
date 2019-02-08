#include <iostream>

using namespace std;

void rvereseArray(int arr[], int end)
{
    int start = 0;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
   cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    printArray(arr, 4);
    rvereseArray(arr, 3);
    cout << "Reversed array is" << endl;
    printArray(arr, 4);
    cout << "Finished";
    return 0;
}
