// Simple But takes O(n) and O(3) space
void sort012(int a[], int n)
{
    // coode here
    int num[3] = {0};
    for (int i = 0; i < n; i++)
    {
        num[a[i]]++;
    }

    int index = 0;

    while (num[0]--)
    {
        a[index++] = 0;
    }
    while (num[1]--)
    {
        a[index++] = 1;
    }
    while (num[2]--)
    {
        a[index++] = 2;
    }
}

// Dutch National Flag Algorithm
void solve013(int a[], int n)
{
    int low, mid, high;
    low = mid = 0;
    high = n;

    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            int temp = a[mid];
            a[mid] = a[low];
            a[low] = temp;
            low++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else if (a[mid] == 2)
        {
            int temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
            mid++;
        }
    }
}