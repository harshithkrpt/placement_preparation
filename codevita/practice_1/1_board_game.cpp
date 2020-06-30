/*
 * You are given an N x N grid of squares. Each square except the top left is filled with a positive integer. You start at the top left corner with a score of 0 and move to the bottom right square by moving either right by one square or down by one square. As you move to the new square, your score becomes [S/2] + k, where S was the score at your previous square and k is the number written in the current square. In the above, [x] is the largest integer which is not greater than x. Thus, [5] is 5, and [5.5] is also 5.

Write a program to find the smallest score with which you can exit the grid.
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n][n];
    int dp[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            dp[i][j] = 0;
        }
    }

    for (int i = 1; i < n; i++)
    {
        dp[0][i] = (dp[0][i - 1] / 2) + arr[0][i];
    }

    for (int i = 0; i < n; i++)
    {
        dp[i][0] = (dp[i - 1][0] / 2) + arr[i][0];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            int l = dp[i][j - 1] / 2;
            int r = dp[i - 1][j] / 2;
            dp[i][j] = min(l, r) + arr[i][j];
        }
    }

    cout << dp[n - 1][n - 1];

    return 0;
}