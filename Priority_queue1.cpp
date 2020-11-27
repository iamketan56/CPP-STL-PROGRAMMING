#include <iostream>
#include <queue>
#include <vector>
using namespace std;
template <typename T>
void print_queue(T &q)
{
    while (!q.empty())
    {
        cout << q.top() << "  ";
        q.pop();
    }
    cout << endl;
}
int main()
{
    //user defined type
    auto cmp = [](int left, int right) { return (left) > (right); };
    std::priority_queue<int, std::vector<int>, decltype(cmp)> q3(cmp);
    for (int elm : {1, 3, 2, 4, 5, 7, 6, 8, 10, 9})
    {
        q3.push(elm);
    }
    print_queue(q3);
}