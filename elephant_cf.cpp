#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[] = {5,4,3,2,1};

    int cnt = 0;
    for(int i=0; i<5; i++)
    {
        if(n >= arr[i])
        {
            cnt += n/arr[i];
            n %= arr[i];
        }
    }
    cout << cnt << endl;
    return 0;
}