#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;
int main()
{
    set<int> Set = {2, 3, 4, 1, 3, 5, 2, 4};
    for (const auto &i : Set)
    {
        cout << i << endl;
    }
}