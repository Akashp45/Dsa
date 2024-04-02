#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    cout<<"Base address of arr: "<<&arr<<endl;
    cout<<"Base address of arr: "<<arr<<endl;
    // these both are giving same addresses 
    cout<<"Size of arr: "<<sizeof(arr)<<endl;
    // size of array can be calculated by "sizeof" inbuild function
    return 0;
}