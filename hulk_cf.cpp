#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int flag = 0;
    string s = "";
    string hate = "I hate ";
    string love = "I love ";
    string that = "that ";
    string it = "it ";

    for(int i=1; i<=n; i++)
    {
        if(i % 2 == 0)
            s += love; 
        else
            s += hate;
        if(i == n)
            s += it;
        else
            s += that;
    }
    cout << s << endl;
    return 0;
}