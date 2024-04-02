#include<iostream>
using namespace std;

void ExtremePrint(int Arr[],int size)
{
    int left = 0;
    int right = size -1;

    while(left <= right)
    {
        if(left == right)
        {
            cout<<Arr[left]<<endl;
        }
        else
        {
            cout<<Arr[left]<<endl;
            cout<<Arr[right]<<endl;
        }
        left ++;
        right --;
    } 
}

int main()
{
    int Arr[6]={10,20,30,40,50,60};
    int size = 6;
    ExtremePrint(Arr,size);
    cout<<endl;
    int Arr1[5]={10,20,30,40,50};
    int size1 = 5;
    ExtremePrint(Arr1,size1);

    return 0;
}