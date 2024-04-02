#include<iostream>
using namespace std;

int IncrementByOne(int n)
{
    n = n + 1;
    return n;
}

int main()
{
    int n;
    n=5;
    n = IncrementByOne(n);
    cout<<"n: "<<n;
    return 0;
}