#include <iostream>
#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;
class A
{
public:
    int x;
    A(int x = 0) : x{x} { cout << "Constructor" << endl; };
    A(const A &rhs)
    {
        x = rhs.x;
        cout << "Copy" << endl;
    }
};
bool operator<(const A &lhs, const A &rhs) { return lhs.x < rhs.x; }
int main()
{
    set<A> SET;
    SET.insert(A(10));
    SET.emplace(10);

    //emplace is used to construct object in place and avoids uncessarly copy of object
}