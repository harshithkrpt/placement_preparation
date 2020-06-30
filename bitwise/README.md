# Bit Wise Operators

- & (bit wise AND)

- | (bit wise OR)

- ^ (bit wise XOR)

- << left shift

- \>\> right shift

- ~ (bit wise NOT)

## Facts about bitwise operators

- left and right shift should not be used for negative numbers and should not be shifted more than the size of the data type (ex: 32 bit for int)

- XOR is powerful

```cpp
// Given a set of numbers where all elements occur even number of times except one number, find the odd occurring number

int findOdd(int arr[],int n)
{
    int res = 0,i;
    for(int i=0;i<n;i++)
        res ^= arr[i];
    return res;
}
```

> Intresting XOR Problems
>
> find the missing number
> swap two numbers without a temp variable
> a memory efficient double linked list
> find 2 numbers with odd occurances in an unsorted-array
> add two numbers without using arithmetic operators
> swap bits in a given number
> count number of bits to be flipped to convert a to b
> find the elements that appears once
> detect if two integers have opposite signs

- bitwise operators should not be used in place of logical operators

- The left-shift and right-shift operators are equivalent to multiplication and division by 2 respectively.

```cpp
    int main()
    {
        int x = 19;
        printf("x << 1 = %d\n",x << 1); // 38
        printf("x >> 1 = %d\n",x >> 1); // 9
    }
```

- & can be used to quickly check if a number is even or odd

```cpp
    int main()
    {
        int x = 19;
        (x & 1) ? printf("Odd") : printf("Even"); // Odd
        return 0;
    }
```

- The ~ operator should be used carefully.

```cpp
    int main()
    {
        unsigned int x = 1;
        printf("Signed Result %d \n",~x); // -2
        printf("Unsigned Result %ud \n",~x); // 4294967294d
    }
```

## Bit Wise Hacks for Competitive Programming

- How to set a bit in the number 'num':

```cpp

    void set(int &num,int pos)
    {
        // First Step is Shift '1' to pos
        // next bitwise or
        num = num | (1 << pos);
    }


```

- How to unset/clear a bit at n'th position in the number

```cpp

    void unset(int &num,int pos)
    {
        num = num & (~(1 << pos));
    }
```

- Toggle a bit at nth position

```cpp
    void toggle(int &num, int pos)
    {
        num =  num ^ ( 1 << pos);
    }
```

- Checking if a bit at nth position is set or unset

```cpp
    bool at_position(int num,int pos)
    {
        bool bit = num & (1<<pos);
        return bit;
    }
```

- Stripping off the lowest set bit

```cpp
void strip_last_set_bit(int &num)
{
    num = num & (num-1);
}
```
