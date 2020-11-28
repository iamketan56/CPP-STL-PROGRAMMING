#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    std::unordered_multiset<int> us = {4, 7, 2, 6, 5, 9, 4, 1, 3, 5, 2};
    auto search = us.find(2);
    if (search != us.end())
    {
        cout << "Found"
             << " " << (*search) << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    for (auto &elm : us)
    {
        cout << elm << " ";
    }
}