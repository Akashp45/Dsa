#include <iostream>
using namespace std;

int main()
{

    // string name;
    // cin >> name;

    // Length of string
    // cout << "Length of String: " << name.length() << endl;

    // empty String
    // string temp = "";
    // cout << "String is Empty or not: " << name.empty() << endl;
    // cout << "String is Empty or not: " << temp.empty() << endl;

    // Index
    // cout << "Character at position 0 is: " << name.at(0) << endl;

    // front
    // cout << "Front char of string is: " << name.front() << endl;

    // back
    // cout << "Front char of string is: " << name.back() << endl;

    // append
    // string str1 = "Akash";
    // string str2 = "Panse";

    // str1.append(str2);

    // cout << "String after append: " << str1<<endl;

    // Erase

    // string desc = "This is a car";
    // desc.erase(4, 3);
    // cout << "String after erase: " << desc;

    // string name = "Akash Panse";
    // string middle = "Sachin ";

    // Insert
    // name.insert(6, middle);
    // cout << name;

    // push_back, pop_back
    // string name = "Akash";
    // name.push_back('.');

    // cout << name << endl;

    // name.pop_back();

    // cout << name << endl;

    // find
    // string str1 = "Akash is good boy";
    // string str2 = "bad";
    // if (str1.find(str2) == string::npos)
    // {
    //     cout << "Not found";
    // }
    // else
    // {
    //     cout << "Found";
    // }

    // Compare
    // string str1 = "Love";
    // string str2 = "love";

    // if (str1.compare(str2) == 0)
    // {
    //     cout << "Matching" << endl;
    // }
    // else
    // {
    //     cout << "Not Matching" << endl;
    // }

    // substr
    string str1 = "You are the brand ambassador";
    cout << str1.substr(12, 5);

    return 0;
}