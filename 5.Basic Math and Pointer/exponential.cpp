#include <iostream>
using namespace std;

int slowExponentiation(int a, int b)
{
    int ans = 1;

    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }

    return ans;
} // O(b);

int fastExponentiation(int a, int b)
{

    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            // odd
            ans *= a;
        }
        a = a * a;
        b >>= 1; // b= b/2 >> Right shift operation
    }
    return ans;
}

int main()
{
    cout << "Ans: " << slowExponentiation(2, 5) << endl;
    cout << "Ans: " << fastExponentiation(2, 5) << endl;

    return 0;
}