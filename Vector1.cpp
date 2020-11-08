#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::vector<int> vc; //decalration

    std::vector<int> vc2(5, 10);             // size 5 with all element as 10
    std::vector<int> vc3 = {1, 2, 3, 4, 5};  //intializer list
    std::vector<int> vc4 = {6, 7, 8, 9, 10}; // uniform intializer list

    cout << vc2[1];
    cout << vc3.front();
    cout << vc4.back();
}