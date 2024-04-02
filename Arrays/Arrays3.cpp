#include<iostream>
using namespace std;


int main()
{
    int Arr[10];
    for(int i=0; i<10; i++)
    {
        cout<<"Enter the value at "<<i<<" index: ";
        cin>>Arr[i];
    }

    cout<<"Array after multiplying by 2"<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<Arr[i]*2<<" ";
    }


}