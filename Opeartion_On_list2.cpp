#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main()
{
    list<int> List1 = {1, 2, 3, 4, 5, 6, 7};
    list<int> List2 = {8, 9, 10, 14, 15, 16, 17};
    list<int> List3 = {20, 21, 23, 24, 3};
    //Swap
    List1.swap(List2);
    for (auto &el : List1)
    {
        cout << el << " ";
    }
    cout << endl;
    //Splice
    List2.splice(List2.begin(), List1);

    for (auto &l : List2)
    {
        cout << l << " ";
    }
    cout << endl;
    //Reverse
    List2.reverse();
    for (auto &rl : List2)
    {
        cout << rl << " ";
    }
    cout << endl;
    //Sort
    List2.sort();
    for (auto &sl : List2)
    {
        cout << sl << " ";
    }

    //Merge

    List2.merge(List3);
    for (auto &ml : List2)
    {
        cout << ml << " ";
    }
}