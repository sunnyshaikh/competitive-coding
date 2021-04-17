#include <bits/stdc++.h>
using namespace std;

int main()
{
    string chars = "ABC!@DEijkl9FGHMV34pqrs5WXYZabc#$%^defgNOPQRSTUhmn678otuvIJKLwxyz&*(){}012";

    int length;
    do
    {
        cout << "Enter length: ";
        cin >> length;
        if (length < 6)
            cout << "\n** We recommend you to generate atleast 6 length password for security reasons\n\n";
    } while (length < 6);
    string password = "";
    srand(time(0));
    for (int i = 0; i < length; i++)
    {
        password += chars[rand() % chars.size()];
    }

    cout << password;

    return 0;
}
