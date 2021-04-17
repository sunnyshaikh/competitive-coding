#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int lcnt = 0;
    int ucnt = 0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            lcnt++;
        else
            ucnt++;
        
    }
    if(lcnt >= ucnt)
    {
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
        }
    }
    else
    {
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
    }

    cout << str << endl;
    return 0;
}