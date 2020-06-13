// Find Duplicate characters in a string.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inp;
    cin >> inp;
    int arr[256] = {0};

    for (int i = 0; i < inp.size(); i++)
    {

        arr[inp[i]]++;
    }
    cout << "Duplicate Characters are : ";
    for (int i = 0; i < 256; i++)
    {
        if (arr[i] >= 2)
        {
            cout << ((char)i) << ' ';
        }
    }

    return 0;
}