// brute force approach: sort the array in descending
// order and second index element is your second largest elem TC(nlogn)

// optimal approach TC(n)
#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums)
{
    int lar = INT_MIN;
    int slar = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > lar)
        {
            slar = lar;
            lar = nums[i];
        }

        else if (nums[i] > slar && nums[i] != lar)
        {
            slar = nums[i];
        }
    }

    return slar;
}