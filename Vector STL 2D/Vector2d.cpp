#include<iostream>
#include<vector>
using namespace std;

int  main()
{
    vector<vector<int>>Arr(5,vector<int>(10,0));

    for(int i=0; i<Arr.size();i++)
    {
        for(int j=0; j<Arr[i].size();j++)
        {
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
