#include<iostream>
#include<limits.h>
using namespace std;

int FindMax(int Arr[][5],int r,int c)
{
    int max =INT_MIN;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(Arr[i][j]>max)
            max = Arr[i][j];
        }
    }
    return max;
}

int FindMin(int Arr[][5],int r,int c)
{
    int min =INT_MAX;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(Arr[i][j]<min)
            min = Arr[i][j];
        }
    }
    return min;
}

int main()
{
    int Arr[][5]={
        {1,2,3,4,5},
        {2,45,76,90,67},
        {10,43,23,78,91}
    };
    int row = 3;
    int column = 5;
    cout<<"Maximum No is: "<<FindMax(Arr,row,column)<<endl;
    cout<<"Minimum No is: "<<FindMin(Arr,row,column)<<endl;
    return 0;
}