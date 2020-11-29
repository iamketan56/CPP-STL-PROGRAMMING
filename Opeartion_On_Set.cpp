#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
    std::set<int> s = {1, 2, 3, 4, 3, 5, 2, 3, 5};
    //Capactiy
    cout << s.size() << endl;
    cout << s.empty() << endl;

    //MODIFIER
    std::set<int>::iterator it;
    it = s.begin();
    //insert
    s.insert(it, 7);
    for (auto &el : s)
    {
        cout << el << " ";
    }
    cout << endl;
    // erase
    s.erase(2);
    for (auto &el : s)
    {
        cout << el << " ";
    }
    cout << endl;
    std::set<int> s1 = {1, 4, 2, 3, 5, 6, 64, 3};
    //swap
    s.swap(s1);
    for (auto &el : s)
    {
        cout << el << " ";
    }
    cout << endl;
    //reverse
    std::set<int>::reverse_iterator itt;
    for (itt = s.rbegin(); itt != s.rend(); ++itt)
    {
        cout << *itt << " ";
    }
    cout << endl;
    it = s.find(2);
    cout << *it;

    cout << endl;
    //lower bound
    it = s.lower_bound(4);
    s.erase(it);
    cout << endl;
    for (auto &el : s)
    {
        cout << el << " ";
    }
}