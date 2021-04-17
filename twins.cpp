#include <bits/stdc++.h>
using namespace std;

int sum_array(int arr[], int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
        sum += arr[i];
    return sum;
}

int main()
{
    int n, a;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);

    int sum = sum_array(arr, n);
    int s = 0, cnt = 0;
    for(int i=n-1; i>=0; i--)
    {
        if(s <= sum/2)
        {
            cnt++;
            s += arr[i];
        }
    }
    cout << cnt << endl;
    return 0;
}