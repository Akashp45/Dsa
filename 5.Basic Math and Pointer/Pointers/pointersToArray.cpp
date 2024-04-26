#include <iostream>
using namespace std;

int main()
{

    // Basic Pointer

    int a = 5;
    int *ptr = &a;

    // pointers to an array;
    int arr[5];

    // 1.
    int *ptr1 = arr;

    // 2.
    // int *ptr = &arr   //---> Will not work
    int(*ptr2)[5] = &arr;

    // Array of pointers
    // declearation
    int *arr2[5];
    int nums[5] = {1, 2, 3, 4, 5};

    // initilazition
    arr2[0] = &nums[0];
    arr2[1] = &nums[1];
    arr2[2] = &nums[2];
    arr2[3] = &nums[3];
    arr2[4] = &nums[4];

    // Access
    cout << *arr2[0];
    cout << *arr2[1];
    cout << *arr2[2];
    cout << *arr2[3];
    cout << *arr2[4];

    return 0;
}