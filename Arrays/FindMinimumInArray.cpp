#include<iostream>
#include<limits.h>
using namespace std;

int FindMinimunInArray(int arr[],int size)
{
    int minAns = INT_MAX;

    for(int i=0; i<size; i++)
    {
        if(arr[i]<minAns)
        {
            minAns = arr[i];
        }
    }
    return minAns;
}

int main()
{
    int Arr[] = {10,20,30,1,50,4,7,20,66,200};
    int size = 10;
    int minimum = FindMinimunInArray(Arr,size);
    cout<<"Minimum no from array is: "<<minimum;
    return 0;
}