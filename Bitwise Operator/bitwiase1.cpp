#include<iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 3;

    cout<<(a & b);


    cout<<endl;

    cout<<(a | b);

    int num = 1;

    cout<<endl;

    cout<<(~num)<<endl;

    cout<<(~num)<<endl;

    cout<<~(num)<<endl;

    int c=5;
    int d=5;

    cout<<(c^d)<<endl;

    // leftshift(<<) and rignt shift(>>)
    int n = 7;
    cout<<(n<<1)<<endl;

    cout<<(n>>1)<<endl;

    // Pre Increment and Post Incrememnt
    //Pre-Increment: 
    int j = 21;
    cout<< ++j << endl;

    //Post-Increment:
    int ca = 21;
    cout<< ca++ << endl;

    return 0;

}