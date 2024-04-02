#include<iostream>
using namespace std;

int main()
{
    int Arr[7]={23,-7,12,-10,-11,40,60};
    int index=0;
    int j=index;

    for(int i=0;i<7;i++)
    {
        cout<<Arr[i]<<" ";
    }
    
    cout<<endl;
    for(int index=0;index<7;index++)
    {
        if(Arr[index] < 0)
        {
            swap(Arr[index],Arr[j]);
            j = j+1;
        }
    }

    for(int i=0;i<7;i++)
    {
        cout<<Arr[i]<<" ";
    }
}