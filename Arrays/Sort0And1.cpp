#include<iostream>
using namespace std;

void Sort0And1(int arr[],int size)
{
    int zerocount = 0;
    int onecount = 0;

    for(int i=0; i<size; i++)
    {
        if(arr[i]==1)
        {
            onecount++;
        }
        if(arr[i]== 0)
        {
            zerocount++;
        }
    }

    cout<<"Zerocount: "<<zerocount<<endl;
    cout<<"Onecount: "<<onecount<<endl;

    // int j;
    // for(j=0; j<zerocount; j++)
    // {
    //     arr[j]=0;
    // }

    // for(int k = j; k<size; k++)
    // {
    //     arr[k]=1;
    // }

    // Easy Way

    int index = 0;

    while (zerocount --)
    {
        arr[index]=0;
        index ++;
    }

    while (onecount --)
    {
        arr[index]=1;
        index ++;
    }
}

int main()
{
    int arr[] = {0,1,0,1,1,1,1,0,0,0,1,1};
    int size = 12;

    Sort0And1(arr, size);

    for(int i= 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}