#include<iostream>
using namespace std;

void PrintMaximum(int a, int b, int c)
{
    if(a>b && a>c)
    {
        cout<<"Maximum is: "<<a; 
    }

    else if(b>a && b>c)
    {
        cout<<"Maximum is: "<<b; 
    }

    else
    {
        cout<<"Maximum is: "<<c; 
    }
}

int main()
{
    PrintMaximum(10,20,30);
    return 0;
}
