#include <iostream>
using namespace std;

int factorial(int n)
{

    // Base Case
    if (n == 1 || n == 0)
    {
        return 1;
    }

    // Processing

    // Recursive call
    int recursionAns = factorial(n - 1);

    // Processing
    int finalAns = n * recursionAns;
    return finalAns;
}

int main()
{
    cout << factorial(5);
    return 0;
}