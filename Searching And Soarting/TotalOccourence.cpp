#include<iostream>
using namespace std;

int FindFirstOccerence(int arr[],int n, int target)
{
    int start=0;
    int end = n-1;
    int mid =(start + end)/2;
    int ans =-1;

    while(start<=end)
    {   
        if(arr[mid] == target)
        {
            ans = mid;

            end = mid-1;
        }
        else if(target > arr[mid])
        {
            start = mid + 1;
        }
        else if(target < arr[mid])
        {
            end = mid - 1;  
        }

        mid = (start + end)/2;
    }
    return ans;
}

int FindLastOccurence(int arr[],int size, int target)
{
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > target)
        {
            end = mid - 1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }

        mid = (start + end)/2;
    }

    return ans;
}

int TotalOccerence(int fo,int lo)
{
    int Total = lo-fo+1;
    return Total;
}

int main()
{
    int arr[]={10,20,30,30,30,30,30,40,50};
    int size = 9;
    int target = 30;

    int fo = FindFirstOccerence(arr,size,target);
    int lo = FindLastOccurence(arr,size,target);

    if(fo == -1 and lo == -1)
    {
        cout<<"Element not present in array";
    }
    else if(fo == lo )
    {
        cout<<"Element is present only one time at index "<<fo<<" ";
    }
    else{
        int Total_Occerence = TotalOccerence(fo,lo);
        cout<<"Totla Occourence of element in array "<<Total_Occerence;
    }

    return 0;
}