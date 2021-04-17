#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    
    if(m%a==0 && n%a==0)
        cout << (m/a) * (n/a) << endl;
    if(m%a>0 && n%a==0)
        cout << ((m/a)+1) * (n/a) << endl;
    if(m%a==0 && n%a>0)
        cout << (m/a) * ((n/a)+1) << endl;
    if(m%a>0 && n%a>0)
        cout << ((m/a)+1) * ((n/a)+1) << endl;
        
    return 0;
}