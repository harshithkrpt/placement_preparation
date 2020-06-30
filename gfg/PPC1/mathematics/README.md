# Mathematics

## Find Number of Digits in a Number

- Given an integral number N. The task is to find the count of digits present in this number.

- 2 Solutions 1 is O(digitscount) and other O(1)

```cpp
// O(digitscount)
#include <iostream>
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
    while (num)
    {
        count++;
        num /= 10;
    }
    cout << count;
    return 0;
}
```

```cpp
// O(1)
// number of digits in K = floor(log10(N) + 1)

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
```
