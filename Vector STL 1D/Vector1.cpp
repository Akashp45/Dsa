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

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    Display(v);

    v.pop_back();
    Display(v);
    return 0;
}