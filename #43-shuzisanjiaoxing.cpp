/**
 * @file #43-shuzisanjiaoxing.cpp
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

int main(int argc, char const *argv[])
{
    /**
     * @brief 初始化
     *
     */
    int n, num;
    cin >> n;
    vector<vector<int>> nums(n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cin >> num;
            nums[i].push_back(num);
        }
    }

    /**
     * @brief 解题
     *
     */

    for (int i = n - 1; i >= 1; --i)
    {
        for (int j = 0; j <= i - 1; ++j)
        {
            nums[i - 1][j] += max(nums[i][j], nums[i][j + 1]);
        }
    }
    cout << nums[0][0] << endl;
    return 0;
}
