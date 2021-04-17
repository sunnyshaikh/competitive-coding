#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str; 
        cin >> str;
        int len = str.size();

        if(len > 10)
            cout << str[0] << len-2 << str[len-1] << endl;
        else
            cout << str << endl;
    }
    return 0;
}



// #include <iostream>
// #include <string>

// using namespace std;

// void long_words(string str)
// {
//     int size = str.size();
//     int cnt = 0;
//     if(size > 10)
//     {
//         for(int i=1; i<size-1; i++)
//             cnt++;
//         cout << str[0] << cnt << str[size-1] << endl;
//     }
//     else
//         cout << str << endl;
// }

// int main()
// {
//     int t;
//     string str;
//     cin >> t;

//     while(t--)
//     {
//         cin >> str;
//         long_words(str);
//     }

//     return 0;
// }
