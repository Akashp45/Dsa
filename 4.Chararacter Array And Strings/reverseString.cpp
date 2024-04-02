
#include<iostream>
#include<string.h>
using namespace std;

void reverseString(char ch[],int n){
    int i = 0;
    int j = n-1;

    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}

int main(){
    char ch[100];

    cout<<"Enter Input String: ";
    cin.getline(ch,100);
    cout<<"Before: "<<ch<<endl;
    int len = strlen(ch);
    reverseString(ch,len);
    cout<<"After: "<<ch<<endl;
    strrev(ch);
    cout<<"Using Utility Function: "<<ch;
    

}