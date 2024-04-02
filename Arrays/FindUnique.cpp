#include<iostream>
using namespace std;

int getunique(int Arr[], int size)
{
    int ans = 0;
    for(int i = 0 ; i<size ; i++)
    {
        ans = ans ^ ans[i];
    }
    return ans;
}
int main()
{
    int arr[] = {10,20,30,20,10,11,22,11,40,40,22};
    int n = 11;

    int FinalAns = getunique(arr , n);
    cout<<"Unique Element is: "<<FinalAns<<endl;

    return 0;
}