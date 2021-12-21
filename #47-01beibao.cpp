/**
 * @file #47-01beibao.cpp
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
int dp[1004][10004];
int main(int argc, char const *argv[])
{
    /**
     * @brief 初始化
     *
     */
    int maxWeight, num;
    cin >> maxWeight >> num;
    int weights[num], values[num];
    for (int i = 1; i <= num; ++i)
        cin >> weights[i] >> values[i];

    /**
     * @brief 解题
     * 正常情况下应该是选择的前面物品的选择影响后面物品的选择，从而影响总的价值
     * 当总的价值确认下来时，总是有这么一个结果
     */

    for (int i = 1; i <= num; ++i)
    {
        for (int j = 0; j <= maxWeight; ++j)
        {
            dp[i][j] = dp[i - 1][j];
            if (weights[i] <= j)
            {
                dp[i][j] = max(dp[i - 1][j - weights[i]] + values[i], dp[i][j]);
            }
        }
    }

    cout << dp[num][maxWeight] << endl;

    return 0;
}
