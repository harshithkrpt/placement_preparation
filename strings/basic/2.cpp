/* 
    Write a program to count the number of occurrences of each character
in the string and print it.
 */
#include <iostream>
using namespace std;
#include <vector>
int main()
{
    string inp;
    int arr[256] = {0};
    vector<int> order;
    cin >> inp;

    for (auto i : inp)
    {
        if (!arr[i])
        {
            order.push_back(i);
            arr[i] = 1;
        }
        else
        {
            arr[i]++;
        }
    }
    for (auto x : order)
    {
        cout << "Number of Occurrence of " << (char)x << " is: " << arr[x] << endl;
    }
}