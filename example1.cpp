#include <iostream>
using namespace std;

int digit_count(int n)
{
    if (n == 0)
        return 1;
    int cnt = 0;
    while (n)
    {
        n /= 10;
        cnt++;
    }
    return cnt;
}

int main()
{
    int input;
    cout << "Enter a number: ";
    cin >> input;
    int count = digit_count(input);
    if (input > 0 && count > 3)
        cout << "Positive more than 3 digit\n";
    else if (input < 0 && count > 3)
        cout << "Negative more than 3 digit\n";
    else if (input > 0)
        cout << "Positive " << count << " digit\n";
    else if (input < 0)
        cout << "Negative " << count << " digit\n";

    return 0;
}