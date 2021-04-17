#include <bits/stdc++.h>
using namespace std;
int main() {
    int yr;
    cin >> yr;

    while(1) {
        yr++;

        int units = yr%10;
        int tens = (yr/10)%10;
        int hnrd = (yr/100)%10;
        int tsnd = (yr/1000)%10;

        if(units!=tens && units!=hnrd && units!=tsnd && tens!=hnrd && tens!=tsnd && hnrd!=tsnd)
            break;
    }
    cout << yr;   
}