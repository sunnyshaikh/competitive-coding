#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll n, k, i;
    cin >> n >> k;
    int arr[n];
    int j=0;
    for(i=1; i<=n; i+=2)
    {
        arr[j++] = i;
        if(i == n-1)
            i = 0;
    }

    for(int i: arr)
        cout << i << " ";
    return 0;
}
