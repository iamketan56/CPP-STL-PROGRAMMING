#include <iostream>
#include <vector>
#include <functional>
#include <map>
using namespace std;
//if multiple value with a single key
int main()
{
    std::map<string, vector<int>> MAp; //std::map<string, int, std::greater<string>> MAp;
    MAp["Ketan"].push_back(12344);
    MAp["Ketan"].push_back(12343);
    MAp["Ketan"].push_back(12564);
    MAp["Ankit"].push_back(23455);
    MAp["Ankit"].push_back(23467);
    MAp["Vijay"].push_back(34532);

    for (auto &el : MAp)
    {
        cout << el.first << endl;
        for (auto &el2 : el.second)
        {
            cout << el2 << " ";
        }
    }
}