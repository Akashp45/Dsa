#include<iostream>
#include<string.h>
using namespace std;


bool checkPaliendrome(char arr[], int size){
    int i = 0;
    int j = size - 1;

    while(i <= j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }else{
            return false;
        }
    }
    return true;
}


int main(){

    char ch[100];
    cout<<"Enter the Char String: ";
    cin.getline(ch,100);
    int length = strlen(ch);

    bool ans = checkPaliendrome(ch,length);
    if(ans== true){
        cout<<"String is Paliendrome ✅";
    }else{
        cout<<"String is Not Paliendrome ❌";
    }
    return 0;
}