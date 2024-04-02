#include<iostream>
using namespace std;

void CountZeroAndOne(int Arr[],int size)
{
    int countZero = 0;
    int countOne = 1;

    for(int i=0; i<size; i++)
    {
        if(Arr[i]== 0)
        {
            countZero ++;    
        }
        else if (Arr[i] == 1)
        {
            countOne ++ ;
        }
    }
    cout<<"No of Zeros: "<<countZero<<endl;
    cout<<"NO of Ones: "<<countOne;
}

int main()
{
    int Arr[15]={1,0,1,0,0,0,0,1,1,1,0,0,0,0,1};
    int size = 15;
    CountZeroAndOne(Arr,size);

    return 0;
}