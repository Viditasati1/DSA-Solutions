#include <bits/stdc++.h>
using namespace std;

// direct optimized approach
bool issorted(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i + 1] < nums[i])
            return false;
    }

    return true;
}