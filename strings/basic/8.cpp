#include <iostream>
#include <sstream>
#include <string>
#include <typeinfo>

using namespace std;

int main()
{
    string s = "123";
    int num = stoi(s);
    // cout << num;

    string s1 = to_string(num);

    auto &t1 = typeid(s1);
    auto &t2 = typeid(num);

    cout << t1.name() << "\n " << t2.name();
    return 0;
}