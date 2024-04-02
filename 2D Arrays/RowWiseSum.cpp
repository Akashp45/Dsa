#include<iostream>
using namespace std;

void RowWiseSum(int Arr[][5],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        int sum =0;
        for(int j=0;j<c;j++)
        {
            sum = sum + Arr[i][j];
        }
        cout<<"Sum of "<<i+1<<" Row is: "<<sum<<endl;
    }
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

    RowWiseSum(Arr,row,column);
    return 0;
}