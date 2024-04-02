#include<iostream>
using namespace std;

bool linearsearch(int arr[],int size, int target) //found--> true notfound--> false
{
    for(int i = 0; i<size ; i++)
    {
        if(arr[i] == target)
        {
            //found
            return true;
        }
    }
    //Notfound
    return false;
}


int main()
{
    int Arr[5]={10,20,30,40,50};
    int size = 5;
    int target = 50;

    bool ans = linearsearch(Arr,size,target);

    if(ans == true)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not found";
    }

    return 0;
}