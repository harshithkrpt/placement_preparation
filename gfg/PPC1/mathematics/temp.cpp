#include <bits/stdc++.h>
using namespace std;

int main()
{

        int num;
    cin >> num;
    int count = 0;
    if (num == 0)
    {
        cout << 1;
        return 0;
    }
    count = log10(abs(num)) + 1;

    cout << count;
    return 0;
}