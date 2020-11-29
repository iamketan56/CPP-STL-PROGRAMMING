#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    std::forward_list<int> fl;
    //assign
    fl.assign({2, 3, 4, 5, 6});
    for (auto &el : fl)
    {
        cout << el << " ";
    }
    cout << endl;
    //push front
    fl.push_front(1);
    for (auto &el : fl)
    {
        cout << el << " ";
    }
    cout << endl;
    //front
    cout << fl.front();
    cout << endl;

    std::forward_list<int> fl1;
    fl1.assign({11, 12, 13, 14, 15});

    //insertafter
    fl1.insert_after(fl1.begin(), 10);
    for (auto &el : fl1)
    {
        cout << el << " ";
    }

    //splice after
    fl.splice_after(fl.begin(), fl1);
    for (auto &el : fl)
    {
        cout << el << " ";
    }
    cout << endl;
    // pop_front
    fl.pop_front();

    for (auto &el : fl)
    {
        cout << el << " ";
    }
    cout << endl;

    //erase after
    fl.erase_after(fl.begin());
    //remove
    fl.remove(4);
    //remove if
    fl.remove_if([](int x) { return x > 2; });
    for (auto &el : fl)
    {
        cout << el << " ";
    }
    cout << endl;
}
