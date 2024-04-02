#include<iostream>
#include<vector>
using namespace std;


int OddElement(vector<int>& arr, int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    if(mid % 2 == 0){          // Even 
        if((mid+1) <= n && arr[mid] == arr[mid+1]){
            s = mid + 2;
        }
        else{
            e = mid;
        }
    }
    else{                      // Odd
        if((mid-1) > 0 && arr[mid] == arr[mid-1]){
            s = mid + 1;
        }
        else{
            e = mid - 1;  
        }
    }
}

int main()
{
    vector<int> v;

    v.push_back(2);
    v.push_back(2);
    v.push_back(4);
    v.push_back(4);
    v.push_back(5);
    v.push_back(10);
    v.push_back(10);
    v.push_back(3);
    v.push_back(3);
    v.push_back(1);
    v.push_back(1);

    int n = v.size();

    int ans = OddElement(v , n);
    cout<<"Odd Element is: "<<ans;

    return 0;
}