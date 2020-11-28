#include <iostream>
#include <array>
using namespace std;
int main()
{
    std::array<int, 5> myarray = {1, 2, 3, 4, 5};

    //At function
    cout << " Element at 3rd Position" << myarray.at(3) << endl;
    //Acess Array
    cout << " Element at 2nd Position" << myarray[2] << endl;
    //Front function
    cout << " Element at Front Position" << myarray.front() << endl;
    //back function
    cout << " Element at last Position" << myarray.back() << endl;
    //data function
    cout << "Pointer to array 1 " << myarray.data() << endl;
    //max_size function
    cout << "Max size of Array " << myarray.max_size() << endl;
    //empty function
    cout << "Tell whether array is empty or not " << myarray.empty();
    cout << endl;

    //Swap Function
    std::array<int, 5> myarray1 = {6, 7, 8, 9, 10};
    cout << "Before Swaping:" << endl;
    for (int i = 0; i < myarray.size(); i++)
    {
        cout << myarray[i];
    }
    cout << endl;
    myarray.swap(myarray1);
    cout << "After Swaping:" << endl;
    for (int i = 0; i < myarray.size(); i++)
    {
        cout << myarray[i];
    }
    cout << endl;
    //Fill function
    myarray.fill(1);
    for (int i = 0; i < myarray.size(); i++)
    {
        cout << myarray[i];
    }
}
