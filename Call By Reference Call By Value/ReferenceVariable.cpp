#include<iostream>
using namespace std;

int main()
{
    // Original Value
    int n = 5;
    // Reference variable
    int &j = n;

    cout<<"n: "<<n<<endl;
    cout<<"j: "<<j<<endl; 

    j++;
    
    cout<<"n: "<<n<<endl;
    cout<<"j: "<<j<<endl; 

    return 0;
}