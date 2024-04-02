#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,50};
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    } 

    for(int i=0; i<3; i++)
    {
        for( int k = 1; k<3; k++)
        {
            cout<<arr[i]<<","<<arr[k]<<endl;
        }
        cout<<endl;
    } 
}
