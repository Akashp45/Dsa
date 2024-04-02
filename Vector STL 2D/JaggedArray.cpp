#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> Arr;

    vector<int> Arr1(5,0);
    vector<int> Arr2(10,2);
    vector<int> Arr3(4,5);
    vector<int> Arr4(15,-7);
    vector<int> Arr5(4,45);

    Arr.push_back(Arr1);
    Arr.push_back(Arr2);
    Arr.push_back(Arr3);
    Arr.push_back(Arr4);
    Arr.push_back(Arr5);

    for(int i=0; i<Arr.size();i++)
    {
        for(int j=0; j<Arr[i].size();j++)
        {
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }
}