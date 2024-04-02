#include<iostream>
#include<string.h>
using namespace std;


void reverseString(char arr[], int size){

    int index = 0;

    while(arr[index] != '\0'){
        char currentChar = arr[index];

        if(currentChar >= 'a' && currentChar <= 'z'){
            arr[index] = currentChar - 'a' + 'A';
        }
        index ++;
    }
}


int main(){

    char ch[100];
    cout<<"Enter the Char String: ";
    cin.getline(ch,100);

    cout<<"Before: "<<ch<<endl;
    reverseString(ch,100);
    cout<<"After: "<<ch<<endl; 
    return 0;
}