#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    for(int i=0; i<10; i++)
    {
        cout<<"Enter the value at "<<i<<" index: ";
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0; i<10; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"Sum of elements is: "<<sum;

    return 0;

} 

