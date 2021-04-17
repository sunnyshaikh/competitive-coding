#include <iostream>
using namespace std;

int main()
{
    int t;
    string str;
    cin >> t;
    
    int x = 0;

    while(t--)
    {
        cin >> str;
        if(str[1] == '+')
            x++;
        else
            x--;
    }
    cout << x << endl;
    return 0;
}