#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, k;
    cin >> n >> k;

    while(n >= 2 && k !=0)
    {
        if(n%10 != 0)
            n -= 1;
        else
            n /= 10;
        k--;
    }

    cout << n << endl;
    return 0;
}