/**
 * @file #38. 兔子繁殖问题
 * @author github-wsz (2506266391@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-21
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <bits/stdc++.h>
using namespace std;
int dp[104];

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    // 1 1 2 3
    dp[0] = 1, dp[1] = 1;

    for (int i = 2; i < n; ++i)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n - 1] + dp[n - 2] << endl;

    return 0;
}
