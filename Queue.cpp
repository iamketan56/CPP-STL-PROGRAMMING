#include <iostream>
#include <queue>
using namespace std;
void print(std::queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}
int main()
{
    std::queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.pop();
    que.push(5);
    print(que);
}