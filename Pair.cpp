#include <iostream>
#include <vector>
using namespace std;
void print(std::pair<int, int> &obj)
{
    cout << obj.first << " " << obj.second << endl;
}
int main()
{
    std::pair<int, int> obj(10, 20);
    print(obj);

    std::pair<int, int> ob = std::make_pair(20, 30);
    print(ob);

    std::vector<std::pair<std::string, int>> List;
    List.push_back(make_pair("Ketan", 21));
    List.push_back(make_pair("Ankit", 23));
    List.push_back(make_pair("Vijay", 20));

    for (auto &el : List)
    {
        cout << el.first << " " << el.second << endl;
    }
}