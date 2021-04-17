#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];
    int finishers_score = arr[k-1];

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] >= finishers_score && arr[i] != 0)
            cnt++;
        else
            break;
    }

    cout << cnt << endl;
    return 0;
}