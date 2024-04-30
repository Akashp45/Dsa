#include <iostream>
using namespace std;

int powOfTwo(int n)
{
    // Base Case
    if (n == 0)
    {
        return 1;
    }

    // Recursive Call
    int ans = 2 * powOfTwo(n - 1);

    return ans;
}

int main()
{
    cout << powOfTwo(5);
    return 0;
}