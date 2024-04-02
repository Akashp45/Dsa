#include<iostream>
using namespace std;

void PrintArrRowwise(int arr[][4],int row, int column)
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

void PrintArrColumewise(int arr[][4],int row,int column)
{
    for(int i=0;i<column;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    // Create:
    int arr[3][3];

    // Initilization:
    int arr1[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int arr2[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int arr3[3][4]{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int row = 3;
    int column = 4;
    PrintArrRowwise(arr3,row,column);
    PrintArrColumewise(arr3,row,column);

    // Input:
    int arr4[3][3];
    int row1 = 3;
    int colunm1 = 3;

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<colunm1;j++)
        {
            cout<<"Enter element for "<<i<<" row and "<<j<<" column ";
            cin>>arr[i][j];
        }
    }

    return 0;
}