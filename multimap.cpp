#include <iostream>
#include <vector>
#include <functional>
#include <map>
using namespace std;
int main()
{
    std::multimap<char, int> MMAp; //std::map<string, int, std::greater<string>> MAp;
    MMAp.insert(make_pair('a', 1));
    MMAp.insert(make_pair('a', 2));
    MMAp.insert(make_pair('a', 3));
    MMAp.insert(make_pair('b', 4));
    MMAp.insert(make_pair('b', 5));

    for (auto &el : MMAp)
    {
        cout << el.first << " " << el.second << endl;
    }

    //get all pair of key
    auto range = MMAp.equal_range('a');
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
}