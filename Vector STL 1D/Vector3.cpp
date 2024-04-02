#include<iostream>
#include<vector>
using namespace std;


void Display(vector<int> v)
{
    cout<<"Printing Vector/Array: ";
    int size = v.size();
    for(int i=0; i<size; i++)
    {
        cout<<v[i]<<endl;    
    }
}

int main()
{
    vector<int> v;

    int n;
    cout<<"Enter the no want to insert in array: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }

    Display(v);

    for(int j=0; j<10; j++)
    {
        v.push_back(80);
    }
    Display(v);

    // To clare the vector
    v.clear();
    Display(v);
    
    return 0;
}