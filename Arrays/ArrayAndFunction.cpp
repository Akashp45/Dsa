#include<iostream>
using namespace std;

void DisplayArr(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    int arr[5] = {2,4,6,8,10};
    int size = 5;
    DisplayArr(arr,size); 
    return 0;
}