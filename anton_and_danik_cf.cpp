#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    int a_cnt = 0;
    int d_cnt = 0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == 'A')
            a_cnt++;
        else
            d_cnt++;
        
    }
    if(a_cnt < d_cnt)
        cout << "Danik\n";
    else if(a_cnt > d_cnt)
        cout << "Anton\n";
    else
        cout << "Friendship\n";    
    
    return 0;
}