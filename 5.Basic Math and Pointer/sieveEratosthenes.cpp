#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<bool> Sieve(int n)
{
    vector<bool> sieve(n + 1, true);

    sieve[0] = sieve[1] = false;

    // for (int i = 2; i <= n; i++) // optimization 2 --> since inner loop will  run if (i*i < n) then after some point it will over i.e eg- if n =25 then after i = 5; j= i*i = 25 now i = 6 therefore j  = 36 so there will no use of outer loop so we will run outer loop till root(n) times
    for (int i = 2; i <= pow(n, 0.5); i++)
    {
        // int j = 2 * i; //Optimization 1 --> first unmarked no would be i * i bcoz others i.e from 2 to (i-1) alrady marked by prwvious iteration

        int j = i * i;

        while (j < n)
        {
            sieve[j] = false;
            j += i;
        }
    }

    return sieve;
}

int main()
{
    vector<bool> sieve = Sieve(25);

    for (int i = 0; i < 25; i++)
    {
        if (sieve[i] == true)
        {
            cout << i << " ";
        }
    }
    return 0;
}