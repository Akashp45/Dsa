#include<iostream>
using namespace std;

void ShiftArr(int arr[],int n)
{
    int temp = arr[n-1];
    for(int i=n-1; i>=1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}
int main()
{
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    ShiftArr(arr, size);

    for(int j =0; j<size; j++)
    {
        cout<<arr[j]<<" "<<endl;
    }
    return 0;

}