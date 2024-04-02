#include<iostream>
using namespace std;

int FindMissingElement(int arr[],int n)
{
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;
    int ans = -1; 
    while(start <= end)
    {
        int diff = arr[mid]-mid;

        if(diff == 1)
        {
            start=mid+1;
        }
        else{
            ans = mid;
            end = mid - 1;
        }
        mid = (start + end)/2;
    }

    if(ans +1 == 0)
    {
        return n+1;
    }
    return ans+1;
}

int main()
{
    int arr[] ={1,2,3,4,6,7,8,9};
    int size = 8;

    int missing = FindMissingElement(arr,size);
    cout<<"Missing Element is: "<<missing;

    return 0;
}