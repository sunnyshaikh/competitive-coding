#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string text;
    cin >> text;

    string decr = "";

    for (int i = 0; i < text.size(); i++)
    {
        if (text.at(i) == 'z')
            text[i] -= 26;
        decr += text[i] + 3;
    }

    cout << decr;

    return 0;
}
