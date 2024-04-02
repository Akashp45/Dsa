#include<iostream>
using namespace std;

void PrintName(string name)
{
    for(int i=0; i<5; i++)
    {
        cout<<name<<endl;
    }
}

int main()
{
    PrintName("Akash");
    PrintName("Pratik");
    return 0;
}