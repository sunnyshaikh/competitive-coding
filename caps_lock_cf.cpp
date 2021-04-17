#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    cin >> s;
    strlwr(s);
    s[0] >= 'a' && s[0] <= 'z' ? s[0] -= 32 : s[0] += 0;
    cout << s << "\n";
    return 0;
}