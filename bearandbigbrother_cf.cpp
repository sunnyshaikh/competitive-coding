#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limak, bob;
    cin >> limak >> bob;

    int gap = 0;
    while(limak <= bob)
    {
        gap++;
        limak *= 3;
        bob *= 2;
    }
    cout << gap << endl;
    return 0;
}