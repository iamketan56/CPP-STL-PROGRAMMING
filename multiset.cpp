#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;
int main()
{
    //Assending order
    /* multiset<int> MultiSet = {2, 3, 4, 1, 2, 6, 2, 4, 3, 5, 2, 4};
    for (const auto &i : MultiSet)
    {
        cout << i << endl;
    }*/
    //desending order
    multiset<int, std::greater<int>> MultiSet = {2, 3, 4, 1, 2, 6, 2, 4, 3, 5, 2, 4};
    for (const auto &i : MultiSet)
    {
        cout << i << endl;
    }
}