#include<iostream>
using namespace std;

void ReverceArr(int Arr[],int size)
{
    cout<<"Original Array: "<<endl;
    for(int i=0 ; i<size ; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;

    int left = 0;
    int right = size-1;

    while(left <= right)
    {
        swap(Arr[left],Arr[right]);
        left ++;
        right --;
    }

    cout<<"Reversed Array: "<<endl;

    for(int i=0 ; i<size ; i++)
    {
        cout<<Arr[i]<<" ";   
    }
    cout<<endl;
}

int main()
{   
    int Arr[7] = {10,20,30,40,50,60,70};
    int size = 7;

    ReverceArr(Arr,size);

    return 0;
}