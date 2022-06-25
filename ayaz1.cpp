#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}
void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size-1; i+=2)
    {
        swap(arr[i], arr[i+1]);
    }
}
int main()
{
    int even[4] = {4, 5, 6, 1};
    swapalternate(even, 4);
    printarray(even, 4);
}