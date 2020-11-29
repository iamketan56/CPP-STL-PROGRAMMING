#include <iostream>
#include <queue>
using namespace std;
void print(std::queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}
int main()
{
    std::queue<int> que;
    std::queue<int> que1;
    que1.push(3);
    que1.push(5);
    que1.push(7);
    que1.push(9);
    que1.push(11);
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.pop();
    que.push(5);
    // print(que);
    cout << que.size();
    cout << endl;
    cout << que.front();
    cout << endl;
    que.swap(que1);
    print(que);
}