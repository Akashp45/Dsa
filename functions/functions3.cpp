#include<iostream>
using namespace std;

int Addition(int a, int b)
{
    int Sum = a+b;
    return Sum;
}

int main(){

    int a,b;
    cout<<"Enter first no: ";
    cin>>a;

    cout<<"Enter second no: ";
    cin>>b;

    int Ans=Addition(a,b);
    cout<<"Addition is: "<<Ans<<endl;
    

    return 0;
}


