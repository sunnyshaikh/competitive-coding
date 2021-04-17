#include <bits/stdc++.h>
using namespace std;

int main()
{
    double s;
    double t;
    int n;

    cin >> s >> t >> n;

    double r = t / s;
    double a = s / r;

    double res = a * pow(r, n - 1);

    cout << res;

    return 0;
}