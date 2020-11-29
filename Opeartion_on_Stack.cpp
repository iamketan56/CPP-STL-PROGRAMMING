#include <iostream>
#include <stack>
using namespace std;
void print(std::stack<int> stk)
{
    while (!stk.empty())
    {
        cout << stk.top() << endl;
        stk.pop();
    }
}
int main()
{
    std::stack<int> Stack;
    Stack.push(1);
    Stack.push(2);
    Stack.push(3);
    Stack.push(4);
    print(Stack);
}