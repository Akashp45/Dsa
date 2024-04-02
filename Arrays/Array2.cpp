#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};

    int brr[5] = {1,2,3,4,5};

    int crr[5] = {1,2};

    // int drr[2] = {1,2,3,4,5}; chalt nahi 

    // indixing in array
    cout<<arr[3]<<endl;

    for (int i=0; i<5; i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    // Taking input in array
    int err[5];
    cout<<"Enter the value to store in array..";
    for (int i=0; i<5; i++)
    {
        cin>>err[i];
    }
    for (int i=0; i<5; i++)
    {
        cout<<err[i]<<" ";
    }



    return 0;
}