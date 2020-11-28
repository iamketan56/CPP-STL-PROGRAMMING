#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::vector<int> Vc = {1, 2, 3, 4, 5, 6, 7, 8};
    //Capacity
    cout << "CAPACITY" << endl;
    cout << Vc.size() << endl;
    cout << Vc.max_size() << endl;
    cout << Vc.empty() << endl;
    cout << Vc.capacity() << endl;
    //Acess
    cout << "ACESS" << endl;
    cout << Vc.at(3) << endl;
    cout << Vc.front() << endl;
    cout << Vc.back() << endl;
    cout << Vc.data() << endl;
    cout << Vc[2] << endl;
    //Modifier
    cout << "Modifier" << endl;
    Vc.push_back(9);

    for (int i = 0; i < Vc.size(); i++)
    {
        cout << Vc[i] << " ";
    }
    cout << endl;
    Vc.pop_back();
    for (int i = 0; i < Vc.size(); i++)
    {
        cout << Vc[i] << " ";
    }
    cout << endl;

    Vc.erase(Vc.begin() + 3); //erase 4th element

    for (int i = 0; i < Vc.size(); i++)
    {
        cout << Vc[i] << " ";
    }
    Vc.clear(); //delete all element
    for (int i = 0; i < Vc.size(); i++)
    {
        cout << Vc[i] << " ";
    }
}