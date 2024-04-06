#include<iostream>
#include<string.h>
using namespace std;


void repalceCharacter(char arr[], int size){
    int index = 0;

    while(arr[index] != '\0'){
        int currentChar = arr[index];

        if(currentChar == '@'){
            arr[index]= ' ';
        }
        index ++;
    }

}


int main(){

    char ch[100];
    cout<<"Enter the Char String: ";
    cin.getline(ch,100);

    cout<<"Before: "<<ch<<endl;
    repalceCharacter(ch,100);
    cout<<"After: "<<ch<<endl; 
    return 0;
}