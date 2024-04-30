#include <iostream>
using namespace std;

int fibonacii(int n)
{
    // Base Case
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    // Recursive Call
    int ans = fibonacii(n - 1) + fibonacii(n - 2);

    return ans;
}

int main()
{
    cout << fibonacii(10);
    return 0;
}