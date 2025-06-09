#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums)
{
    int maxi = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
        maxi = max(maxi, nums[i]);

    return maxi;
}

