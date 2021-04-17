#include <iostream>
using namespace std;

int main()
{
    int n, p, q, cnt = 0;
    cin >> n;

    while(n--)
    {
        cin >> p >> q;
        if(p < q-1)
            cnt++; 
    }
    cout << cnt << endl;
    return 0;
}