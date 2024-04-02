#include<iostream>
using namespace std;

bool FindTarget(int Arr[][4],int row ,int column, int target)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<column; j++)
        {
            if(Arr[i][j]==target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
     int arr1[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int row =3;
    int column = 4;
    int target = 110;

    bool find = FindTarget(arr1,row,column,target);

    if(find == true)
    {
        cout<<"Element Found";
    }
    else{
        cout<<"Element Not Found";
    }

    // cout<<"Find or Not: "<< FindTarget(arr1,row,column,target);

    return 0;
}