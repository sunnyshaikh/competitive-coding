#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int flag = 0; 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i%2 == 0)
            {
                cout << "#";
            }
            else
            {
                cout << ".";
                if(j==m-1)
                    printf("\b#");
            }
            
        }

        cout << "\n";
    }
    return 0;
}