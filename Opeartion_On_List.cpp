#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main()
{
    list<int> List1 = {1, 2, 3, 4, 5, 6, 7};
    //Acess
    cout << List1.front() << endl;
    cout << List1.back() << endl;
    //Modifier

    List1.push_back(8);
    List1.push_front(0);

    //insert through iterator
    std::list<int>::iterator it;
    it = List1.begin();
    it++;
    List1.insert(it, 10);

    for (auto &el : List1)
    {
        cout << el << " ";
    }
    cout << endl;
    it++;
    it++;
    //erase through iterator
    List1.erase(it);
}
