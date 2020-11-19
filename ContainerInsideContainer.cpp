#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::vector<vector<int>> Tree;
    int edges, src, des;
    cin >> edges;
    Tree.resize(edges);
    for (int i = 0; i < edges; i++)
    {
        cin >> src >> des;
        Tree[src].push_back(des);
    }
    for (const auto &i1 : Tree)
    {
        for (const auto &i2 : i1)
        {
            cout << i2;
        }
        cout << endl;
    }
}