#include <iostream>
#include <math.h>
using namespace std;

int count_even_or_odd(int arr[], int n)
{
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
            cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int cnt = count_even_or_odd(arr, n);
    int round = n%2==0?n/2:(n/2)+1;
    for(int i=0; i<n; i++)
    {
        if(cnt >= round)
        {
            if(arr[i] % 2 != 0)
            {
                cout << i+1 << "\n";
                return 0;
            }
        }
        else
        {
            if(arr[i] % 2 == 0)
            {
                cout << i+1 << "\n";
                return 0;
            }
        }
    }
    return 0;
}