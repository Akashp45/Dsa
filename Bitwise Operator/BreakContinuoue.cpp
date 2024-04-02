#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<5;i++)
    {
        cout<< i << endl;
        if(i==2){
            break;
        }
    }

    for(int j =0; j<5; j++){
        cout<<"Hi I am Akash"<<endl;
        continue;
        cout<<"Hiiiiiii...";
    }
    return 0;
}