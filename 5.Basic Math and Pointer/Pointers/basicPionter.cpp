#include <iostream>
using namespace std;

int main()
{

    // int a = 5;
    // cout << "Value of a: " << a << endl;
    // cout << "Address of a: " << &a << endl;

    // Pointer Creation
    // int *ptr = &a;

    // accessing values stored at adddress stored in ptr;
    // cout << "Accessing: " << *ptr << endl;

    // size
    // cout << sizeof(ptr) << endl;

    // char ch = 'K';
    // char *cptr = &ch;
    // cout << sizeof(cptr) << endl;

    // long lachi = 10;
    // long *lptr = &lachi;
    // cout << sizeof(lptr);

    // Bad Practice
    // int *ptr2;
    // cout<<*ptr2;

    // Good Practice --> null pointer
    // int *ptr2 = 0;
    // cout << *ptr2;

    // int b = 5;
    // int *p = &b;
    // p = p + 1;
    // cout << p;
    // --------> Possible

    // int arr[4] = {10, 20, 30, 40};
    // arr = arr + 1;
    // ---------> Not Possible

    char ch[50] = "Akash Panse.";
    cout << ch;

    return 0;
}