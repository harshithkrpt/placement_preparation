// Write a program to reverse the string in place

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inp;
    cin >> inp;
    int i = 0;
    int j = inp.size() - 1;
    while (i < j)
    {
        char temp = inp[i];
        inp[i] = inp[j];
        inp[j] = temp;
        i++;
        j--;
    }
    cout << "Reverse : " << inp;
    return 0;
}