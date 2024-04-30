#include <iostream>
using namespace std;

void printArr(int a[], int n)
{
    if (n == 0)
    {
        return;
    }
    cout << *a << " ";

    printArr(a + 1, n - 1);
}

int main()
{
    int size = 5;
    int arr[] = {10, 20, 30, 40, 50};
    printArr(arr, size);

    return 0;
}