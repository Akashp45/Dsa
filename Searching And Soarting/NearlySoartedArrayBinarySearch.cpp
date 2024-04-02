#include<iostream>
#include<vector>
using namespace std;

int SearchNearlySoarted(vector<int>& v,int n,int target){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(mid -1 > 0 && v[mid - 1] == target){
            return mid - 1;
        }
        if(v[mid] == target){
            return mid;
        }
        if(mid +1 <n && v[mid + 1] == target){
            return mid + 1 ;
        }

        else if(v[mid] > target){
            e = mid -2;
        }
        else{
            s = mid +2 ;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main()
{
    vector<int> v;

    v.push_back(20);
    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    v.push_back(40);
    v.push_back(70);
    v.push_back(60);

    int n =7;
    int target = 60;

    int targetIndex = SearchNearlySoarted(v,n,target);

    if(targetIndex == -1)
    {
        cout<<"Index Not Found"<<endl;
    }
    else{
        cout<<"Index Found At Index: "<<targetIndex<<endl;
    }

    return 0;
}