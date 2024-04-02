#include<iostream>
using namespace std;

void Display(int arr[],int n)
{
    cout<<"Array Elements Are: ";
    for(int j=0; j<n; j++)
    {
        cout<<arr[j]<<endl;
    }
}


int main()
{
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++)
    {
        int data;
        cin>>data;
        arr[i]=data;
    }

    Display(arr,n);


    return 0;
}