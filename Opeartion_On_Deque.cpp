#include <iostream>
#include <deque>
using namespace std;
void print(const std::deque<int> &dq)
{
    for (int num : dq)
    {
        cout << num << " ";
    }
}
int main()
{
    std::deque<int> dqu = {2, 3, 4};
    dqu.push_front(1);
    dqu.push_back(5);
    print(dqu);
    cout << endl;
    dqu.pop_front();
    dqu.pop_back();
    print(dqu);
    cout << endl;
    cout << dqu.at(2);
    cout << endl;
    cout << dqu.size();
    cout << endl;

    std::deque<int>::iterator it = dqu.begin();
    ++it;

    it = dqu.insert(it, 10);
    print(dqu);
    cout << endl;
    dqu.erase(dqu.begin() + 5);
    print(dqu);
}