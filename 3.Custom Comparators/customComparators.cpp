#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int>&v){
    for(int i =0; i< v.size(); i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;
}

void printVv(vector<vector<int>>&v){
    for(int i = 0; i<v.size(); i++){
        vector<int> &temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout<<a<<" "<<b<<endl;
    }
}

// custom comparator -->
// comparators are of type bool

// here we are comparing two integrs so parameters are int &a, int &b
bool myComp(int &a, int &b){
    // return a < b;   // Increasing Order 
    return a > b;   //Decreasing order
}

// here we are comparing two vectors so parameters are vector<int> &a, vector<int>&b
bool myComparator(vector<int>&a, vector<int>&b){
    // return a[1] < b[1];   // Increaing order
    return a[1] > b[1]    // Decreasing order   
}


int main(){
    // vector<int> v = {44,55,11,22,33};
    // sort(v. begin(), v.end(), myComp); // 3rd parameter is comparator  
    // print(v);

    // Vector of Vector sorting
    vector<vector<int>> v;
    int n;
    cout<<"Enter the size of vector: ";
    cin>> n;

    for(int i = 0; i<n; i++){
        int a, b;
        cout<<"Enter values of a, b: "<<endl;
        cin>>a;
        cin>>b;

        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        
        v.push_back(temp);
    }

    // Printing Vector
    printVv(v);

    // sorting

    // By default sorted on basis of first index i.e temp[0];
    sort(v.begin(), v.end());
    cout<<"Sorted vector of vectoron basis of 0th index: "<<endl;
    printVv(v);

    // if we want to srt on basis of second index 
    sort(v.begin(),v.end(),myComparator);
    cout<<"Sorted vector of vector on basis of 1st index: "<<endl;
    printVv(v);

    return 0;
}