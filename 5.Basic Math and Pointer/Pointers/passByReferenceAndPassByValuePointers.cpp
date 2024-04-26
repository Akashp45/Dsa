#include <iostream>
using namespace std;

void solve(int *p)
{
    p = p + 1; // --> here the copy is made and we do changes in it. therefore changes did not visible in main.
}

void solve1(int *&p)
{
    p = p + 1; // --> here the copy is nt made the changes made in main only so changes are visible in main.
}

int main()
{
    int a = 10;
    int *p = &a;

    cout << "Pass By Value: " << endl;
    cout << "p: " << p << endl;
    cout << "&p: " << &p << endl;
    cout << "*p: " << *p << endl;

    solve(p);
    cout << "After Solve: " << endl;

    cout << "p: " << p << endl;
    cout << "&p: " << &p << endl;
    cout << "*p: " << *p << endl;

    int b = 20;
    int *q = &b;

    cout << "Pass By Reference: " << endl;
    cout << "p: " << p << endl;
    cout << "&p: " << &p << endl;
    cout << "*p: " << *p << endl;

    solve1(p);
    cout << "After Solve1: " << endl;

    cout << "p: " << p << endl;
    cout << "&p: " << &p << endl;
    cout << "*p: " << *p << endl;

    return 0;
}