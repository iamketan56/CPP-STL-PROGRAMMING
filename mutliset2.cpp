#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;
class student
{
public:
    string name;
    int age;
    bool operator<(const student &rhs) //comparetor function
        const
    {
        return age < rhs.age;
    }
    bool operator>(const student &rhs) //comparetor function
        const
    {
        return age > rhs.age;
    }
};
int main()
{
    multiset<student, std::greater<>> Multiset = {{"Ketan", 22}, {"Ankit", 21}, {"Vijay", 23}, {"Ketan", 22}};
    for (const auto &i : Multiset)
    {
        cout << i.name << endl;
        cout << i.age << endl;
    }
}