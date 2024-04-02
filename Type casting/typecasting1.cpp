#include<iostream>
using namespace std;

int main()
{
    //Implicit Typecasting
    // 1.
    // float a = 10.5;
    // float b = 5;
    // float ans = a + b;
    // hrer datatype of a is int but compailer implicitly change it to float because float has higher priority
    // cout<<"Ans Is: "<<ans<<endl;

    // 2.
    // char ch='A';
    // int a1 = ch+1;
    // cout<<a1<<endl;

    // 3.
    // int a2 = 97;
    // char ch1 = a2 + 1;
    // cout<<ch1<<endl; 

    // Explicit Typecasting
    // 1.
    // int num1 = 10;
    // float num2 = 5.5;
    // float result = num1 + (int)num2;
    // // here we explicitly convert num 2 from float to int 
    // cout<<"Ans is: "<<result<<endl;

    // 2.
    // double pi = 3.1455875;
    // int intpi= int(pi);
    // cout<<"Ans Is: "<<intpi<<endl
    
    // 3.
    // float akash;
    // akash = 65.52;
    // char charvalue = char(akash);
    // cout<<"Ans Is: "<<charvalue;

    // 4.
    // int c3= 10;
    // int b3 = 3.0;
    // float ans3 = c3 / b3 ;
    // cout<<ans3;

    // 5.
    int c3 =10;
    int b3 = 3.0;
    float ans3 = c3/float(b3);
    cout<<"Ans Is: "<<ans3;



    return 0;
}