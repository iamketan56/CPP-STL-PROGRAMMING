#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int ele;
    cin >> ele;
    int data;
    while (ele--)
    {
        cin >> data;
        v.push_back(data);
    }
    int removeele;
    cin >> removeele;
    v.erase(v.begin() + (removeele - 1));
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
