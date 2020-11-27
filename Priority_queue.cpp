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
    //By Defalut Desending order
    std::priority_queue<int> pq;
    for (int elm : {4, 5, 1, 2, 10, 3, 9, 6, 8, 7})
    {
        pq.push(elm);
    }
    print_queue(pq);

    //Assending order
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq1;
    for (int elm : {4, 5, 1, 2, 10, 3, 9, 6, 8, 7})
    {
        pq1.push(elm);
    }
    print_queue(pq1);
}