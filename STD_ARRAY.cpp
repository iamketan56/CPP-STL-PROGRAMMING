#include <iostream>
#include <array>
using namespace std;
int main()
{
    std::array<int, 5> myarray; // Declaration

    //intialization
    std::array<int, 5> myarray1 = {1, 2, 3, 4, 5}; //initailizer list
    std::array<int, 5> myarray2{1, 5, 2, 3, 7};    //uniform initalization

    //Assign using initalizar list
    std::array<int, 5> myarray3;
    myarray3 = {1, 2, 3, 4, 5};

    //Acess Method
    cout << myarray3.at(3) << endl;
    cout << myarray1[2] << endl;
    cout << myarray2.front() << endl;
    cout << myarray3.back() << endl;
    cout << "Pointer to array 1 " << myarray1.data() << endl;
    cout << &myarray1[0];
}