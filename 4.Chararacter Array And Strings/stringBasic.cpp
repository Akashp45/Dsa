#include <iostream>
using namespace std;

int main()
{
    // Creation
    string name;

    // input
    // cout << "Enter Name: ";
    // cin >> name;

    // print
    // cout << "Name is: " << name << endl;
    // cout << "Printing First Char: " << name[0] << endl;

    // loop
    // int index = 0;
    // while (name[index] != '\0')
    // {
    //     cout << index << ": " << name[index] << endl;
    //     index++;
    // }

    // null index typecasting
    // cout << "Element at index 5: " << name[5] << endl;

    // int value = (int)name[5];
    // cout << "Ascii value: " << value << endl;

    // getline function

    string surname;
    cout << "Enter the Surname: ";
    getline(cin, surname);
    cout << "surname is: " << surname;

    return 0;
}