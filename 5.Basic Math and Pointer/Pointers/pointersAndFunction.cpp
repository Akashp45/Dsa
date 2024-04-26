#include <iostream>
using namespace std;

// void solve(int *arr, int size) //-->both are same
void solve(int arr[], int size)
{
    cout << "Size of arr inside solve function: " << sizeof(arr) << endl;

    cout << "Inside solve -> arr: " << arr << endl;
    cout << "Inside solve -> &arr: " << &arr << endl;
}

void solve1(int arr[])
{
    *arr = *arr + 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    solve(arr, 4);
    cout << "Size of arr inside main: " << sizeof(arr) << endl;

    cout << "Inside main -> arr: " << arr << endl;
    cout << "Inside main -> &arr: " << &arr << endl;

    // Question1

    int arr1[] = {10, 20, 30};
    solve1(arr1);

    for (int i = 0; i < 3; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}