#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::vector<int> vc; //decalration
    vc.reserve(100);     // it will help to stop copy again and again to new array
    for (int i = 0; i <= 40; i++)
    {
        vc.push_back(i);
        cout << "Size is :" << vc.size() << " and Capacity is " << vc.capacity() << endl;
    }
    // capacity will remains same untill size is less or equal to 100 after that size will double as useual
}