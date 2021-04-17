#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxi = a+b+c;

    if(a*(b+c) > maxi)
        maxi = a*(b+c);
    if(a+b*c > maxi)
        maxi = a+b*c;
    else if((a*b*c) > maxi)
        maxi = a*b*c;
    else if((a+b)*c > maxi)
        maxi = (a+b)*c;

    cout << maxi << "\n";
    return 0;
}