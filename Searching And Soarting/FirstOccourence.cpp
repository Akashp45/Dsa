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

int main()
{
    int arr[]={10,20,30,30,30,30,70,80,90};
    int size = 9;
    int target = 90;

    int ansIndex = FindFirstOccerence(arr,size,target);

    if(ansIndex == -1)
    {
        cout<<"Element Not Found"<<endl;
    }
    else{
        cout<<"Element Found At "<<ansIndex<<" Index";
    }
     
    return 0;
}
