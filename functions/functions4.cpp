#include<iostream>
using namespace std;

int sum(int a,int b,int c)
{
    int sum = a+b+c;
    return sum;
}

int main()
{
    int a,b,c;
    cout<<"Enter Three Numbers: "<<endl;
    cin>>a>>b>>c;

    int Addition = sum(a,b,c);
    cout<<"Addition is: "<<Addition;

    return 0;
}