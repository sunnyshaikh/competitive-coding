#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> str;
        if(str[0] == 'T')
            sum += 4;
        if(str[0] == 'C')
            sum += 6;
        if(str[0] == 'O')
            sum += 8;
        if(str[0] == 'D')
            sum += 12;
        if(str[0] == 'I')
            sum += 20;
    }
    cout << sum << "\n";
    return 0;
}