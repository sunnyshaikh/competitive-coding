#include <bits/stdc++.h>
using namespace std;

string reverse_str(string str)
{
    int i = 0;
    int j = str.size()-1;

    while(i <= j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

int main()
{
    string str1;
    string str2;
    cin >> str1 >> str2;

    string reversed_str = reverse_str(str1);
    if(reversed_str == str2)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}