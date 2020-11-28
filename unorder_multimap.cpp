#include <iostream>
#include <vector>
#include <functional>
#include <unordered_map>
using namespace std;
int main()
{
    std::unordered_multimap<char, int> MMAp; //std::map<string, int, std::greater<string>> MAp;
    MMAp.insert(make_pair('a', 1));
    MMAp.insert(make_pair('a', 2));
    MMAp.insert(make_pair('a', 3));
    MMAp.insert(make_pair('b', 4));
    MMAp.insert(make_pair('b', 5));

    for (auto &el : MMAp)
    {
        cout << el.first << " " << el.second << endl;
    }
}