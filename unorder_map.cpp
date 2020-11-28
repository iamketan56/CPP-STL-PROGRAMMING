#include <iostream>
#include <vector>
#include <functional>
#include <unordered_map>
using namespace std;
int main()
{
    std::unordered_map<string, int> MAp; //std::map<string, int, std::greater<string>> MAp;
    MAp["Ketan"] = 1234;
    MAp["Ankit"] = 2345;
    MAp["Vijay"] = 3456;

    for (auto &el : MAp)
    {
        cout << el.first << " " << el.second << endl;
    }
    //direct access
    auto result = MAp.find("Ketan");
    if (result != MAp.end())
    {
        std::cout << " Found " << result->first << " " << result->second << '\n';
    }
    else
    {
        cout << "Not Found";
    }
}