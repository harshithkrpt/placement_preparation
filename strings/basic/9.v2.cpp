#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<char> stk;
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
            stk.push(str[i]);
        else
        {
            while (!stk.empty())
            {
                cout << stk.top();
                stk.pop();
            }
            cout << " ";
        }
    }

    while (!stk.empty())
    {
        cout << stk.top();
        stk.pop();
    }

    return 0;
}