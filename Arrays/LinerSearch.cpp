#include<iostream>
using namespace std;

int main()
{
    int n =5;
    int arr [10];
    int target = 10;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    bool flag = 0;
    
    // 0->Not Found
    // 1->Found

    for(int j=0; j<n; j++)
    {
        if(arr[j] == target)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout<<target<<" not found";
    }

    else{
        cout<<target<<" found";
    }
    return 0;
}