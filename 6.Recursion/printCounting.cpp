#include <iostream>
using namespace std;

void printCountingDecreasing(int n)
{
    // Base Case
    if (n == 1)
    {
        cout << 1;
        return;
    }
    // Processing
    cout << n << " ";

    // Recursive call
    printCountingDecreasing(n - 1);
}

void printCountingIncreasing(int n)
{
    // Base Case
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }

    // Recursive call
    printCountingIncreasing(n - 1);

    // Processing
    cout << n << " ";
}

int main()
{
    printCountingDecreasing(15);
    cout << endl;
    printCountingIncreasing(15);
    return 0;
}