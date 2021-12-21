/**
 * @file #44. 练习题1：最长上升子序列
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
int dp[1000000];
int main(int argc, char const *argv[])
{
    /**
     * @brief 初始化
     *
     */
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    int ans = 1;
    for (int j = 1; j < n; ++j)
    {
        dp[j] = 1;
        for (int i = 0; i < j; ++i)
        {
            if (nums[i] < nums[j])
            {
                dp[j] = max(dp[j], dp[i] + 1);
            }
        }
        ans = max(ans, dp[j]);
    }

    cout << ans << endl;
    return 0;
}
