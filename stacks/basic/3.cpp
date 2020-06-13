// BALANCED PARENTHESIS
#include <bits/stdc++.h>

using namespace std;

char returnPara(char a)
{
    switch (a)
    {
    case '(':
        return ')';
    case '[':
        return ']';
    case '{':
        return '}';
    default:
        return 'e';
    }
}

void solve()
{
    string str;
    cin >> str;
    stack<char> s;
    int flag = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else
        {
            if (!s.empty() && str[i] == returnPara(s.top()))
            {
                s.pop();
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 0)
    {
        cout << "not balanced" << endl;
        return;
    }

    if (s.empty())
        cout << "balanced" << endl;
    else
        cout << "not balanced" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}