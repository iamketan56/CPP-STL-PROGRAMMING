#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> List1 = {1, 2, 3, 4};
    list<int> List2 = {5, 6, 7, 8};

    for (auto &el : List1)
    {
        cout << el << endl;
    }

    for (auto &el : List2)
    {
        cout << el << endl;
    }
}
