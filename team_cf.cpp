#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    int cnt = 0;
    int res = 0;

    while(n--)
    {
        cin >> a >> b >> c;

        if((a + b + c) >= 2)
            res++;
    }
    cout << res << endl;
    
    return 0;
}