#include<iostream>
using namespace std;

void Transpose(int Arr[][3],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
            swap(Arr[i][j],Arr[j][i]);
        }
    }
}

void PrintArrRowwise(int arr[][3],int row, int column)
{
    for (int i = 0; i < row ; i++)
    {
        for ( int j= 0; j <column ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

int main()
{
    int Arr[][3]={
        {1,2,3},
        {2,45,76},
        {10,43,23}
    };
    int row = 3;
    int column = 3;
    Transpose(Arr,row,column);
    PrintArrRowwise(Arr,row,column);
    return 0;
}