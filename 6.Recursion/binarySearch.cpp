#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int start, int end)
{
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] > target)
    {
        return binarySearch(arr, target, start, mid - 1);
    }
    else
    {
        return binarySearch(arr, target, mid + 1, end);
    }
}

int main()
{
    int arr[] = {1, 5, 11, 13, 14, 27};
    int target = 27;
    int start = 0;
    int end = 5;

    int ans = binarySearch(arr, target, start, end);

    if (ans == -1)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found At: " << ans << endl;
    }

    return 0;
}