#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, w, n;
    cin >> k >> w >> n;
    int to_borrow = (((n * (n + 1))) * k) / 2;
    to_borrow-w < 0 ? cout << "0\n" : cout << to_borrow-w;

    return 0;
}
