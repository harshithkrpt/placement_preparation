// Using StringStream
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    stringstream iss(str);
    string word;
    while (iss >> word)
    {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }
}