#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int c = 0;
    while(n != 0 && m != 0)
    {
        c = c == 0 ? 1 : 0;
        n--;
        m--;
    }
    c == 0 ? cout << "Malvika\n" : cout << "Akshat\n";
    return 0;
}