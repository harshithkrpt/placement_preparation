/* 
    Write a program to remove all whitespaces in a given string.
 */
#include <iostream>

using namespace std;

int main()
{
    string inp;
    getline(cin, inp);
    int j = 0, i = 0;
    while (inp[i])
    {
        if (inp[i] != ' ')
        {
            inp[j] = inp[i];
            j++;
        }
        i++;
    }
    inp[j] = '\0';
    cout << inp;
}