#include<iostream>
using namespace std;


int main(){
    // Decleration
    char ch[10];

    // input
    // cin>>ch;

    // printing
    // cout<<"The entered string is: "<< ch<<endl;

    // print using loop
    // for(int i =0; i<10; i++){
        // cout<<"Character at index "<< i << " = " << ch[i]<<endl; 
    // }

    // printing ascii value 
    // using typecasting 
    // char temp = ch[0];
    // int value  = (int) temp;
    // cout<<"printing integer value: "<<value<<endl;

    // delimeter
    // char name [5];
    // cout<<"Enter Full Name: ";
    // cin>>name;

    // cout<<"Full name is: "<<name<<endl;
    // full name will not be printed bcuz we give space when giving input

    // to avoid that we use getline function
    char fullName[50];
    cout<<"Enter Full Name: "<<endl;
    cin.getline(fullName,50);
    cout<<fullName;




    return 0;
}