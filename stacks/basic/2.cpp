// Reverse a String using Stack
#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<char> s;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }
    int i = 0;
    while (!s.empty())
    {
        str[i] = s.top();
        s.pop();
        i++;
    }
    cout << str << endl;
    return 0;
}