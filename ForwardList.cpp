#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> List1 = {1, 2, 3, 4};
    forward_list<int> List2 = {5, 6, 7, 8};

    for (auto &el : List1)
    {
        cout << el << endl;
    }

    for (auto &el : List2)
    {
        cout << el << endl;
    }
}
