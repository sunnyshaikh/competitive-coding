#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    string hello = "hello";
    int x = 0; 
    int y = 0;

    for(int i=0; i<str.size(); i++) 
    {  
        if(str[i] == hello[x]) 
        {
            x++;
            y++;
        }
    }
    y == 5 ? cout << "YES\n" : cout << "NO\n"; 
}
