#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    char str1[100];
    char str2[100];

    cin >> str1 >> str2;

    int size = strcasecmp(str1, str2);
    cout << size << endl;

    return 0;
}