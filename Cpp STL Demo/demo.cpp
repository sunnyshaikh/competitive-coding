#include <bits/stdc++.h>
using namespace std;

void Pair()
{
    pair<int, int> p = {1, 3};

    // prints 1 3
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {1, 3}};

    // prints 1 1 3
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    // creates array of pairs
    pair<int, int> arr[] = { {1, 2}, {4, 6}, {7, 8} };

    // prints 4
    cout << arr[1].first << endl;

}

void Vector()
{
    vector<int> v;  // a empty vector {}

    // inserting into vector 
    v.push_back(1);     // {1}
    v.emplace_back(2);  // {1, 2}

    vector<pair<int, int>> v1;
    
    v1.push_back({1, 2});
    v1.emplace_back(1, 2);

    // vector of size 5 with value as 100
    vector<int> v2(5, 100);  // {100, 100, 100, 100, 100}

    // vector size of 5 with value 0
    vector<int> v3(5);  // {0, 0, 0, 0, 0}
    vector<int> v4(v3);  // {0, 0, 0, 0, 0}

    // iterator
    vector<int>::iterator it = v2.begin();   // points to first element of v2
    it++;   // points to next element of v2

    cout << *(it) << " ";  // prints 100



}

int main()
{
    // Pair();
    Vector();
    
    return 0;
}