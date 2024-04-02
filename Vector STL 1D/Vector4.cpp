#include<iostream>
#include<vector>
using namespace std;

void Display(vector<int> v)
{
    cout<<"Printing Vector/Array: ";
    int size = v.size();
    for(int i=0; i<size; i++)
    {
        cout<<v[i]<<" ";    
    }
}

// Printing metode 2: 

void Display1(vector<int> v)
{
    cout<<"Printing Vector/Array: ";
    for(auto it:v){
        cout<<it<<" ";
    }
}

int main()
{
    // Initilization Methodes
    vector<int> Arr; //Default with no data and zero size

    vector<int> Arr2(5,-1); //Init with n size and with specific data
    Arr2.push_back(10); 
    Display(Arr2);

    cout<<endl;

    vector<int> Arr3={10,20,30,50,40,60};
    Display(Arr3);

    cout<<endl;

    vector<int> Arr4{10,20,30,40,50};
    Display(Arr4);

    cout<<endl;

    // Copying vector
    vector<int> Arr5{1,2,3,4,5,6,7};
    Display(Arr5);
    cout<<endl;
    vector<int> Arr6(Arr5);
    Display(Arr6);

    cout<<endl;

    vector<char> v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    cout<<"Front Element: "<<v[0]<<endl;
    cout<<"End Element: "<<v[v.size()-1]<<endl;
    cout<<"Front Element: "<<v.front()<<endl;
    cout<<"End Element: "<<v.back()<<endl;

    vector<int> v1{10,20,30,40,50,60};
    Display1(v1);



    return 0;
}