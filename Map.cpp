#include <iostream>
#include <vector>
#include <functional>
#include <map>
using namespace std;
int main()
{
    std::map<string, int> MAp; //std::map<string, int, std::greater<string>> MAp;
    MAp["Ketan"] = 1234;
    MAp["Ankit"] = 2345;
    MAp["Vijay"] = 3456;
    for (auto &el : MAp)
    {
        cout << el.first << " " << el.second << endl;
    }
    //direct access
    cout << MAp["Ketan"];
}