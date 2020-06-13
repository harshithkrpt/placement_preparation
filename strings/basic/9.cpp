// Reverse individual words
#include <iostream>

using namespace std;

int main()
{
    string name;
    getline(cin, name);
    int i = -1, j = 0;
    while (name[j])
    {
        j++;
        if (name[j] == ' ' || j == name.size())
        {
            int temp = j - 1;
            while (temp != i)
            {
                cout << name[temp];
                temp--;
            }
            cout << ' ';
            i = j;
        }
    }
    return 0;
}