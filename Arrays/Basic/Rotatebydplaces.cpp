#include <bits/stdc++.h>
using namespace std;

// lets see the brute force approach
// TC(O(2*n))   // SC(O(n))
void rotatebydplaces(vector<int> &nums, int rotvalue)
{

    vector<int> temp;

    int d = rotvalue % nums.size();

    for (int i = 0; i < d; i++)
    {
        temp.push_back(nums[i]);
    }

    for (int i = d; i < nums.size(); i++)
    {
        nums[i - d] = nums[i];
    }

    for (int i = nums.size() - d; i < nums.size(); i++)
    {
        nums[i] = temp[i - nums.size() - d];
    }

    // now return the nums array
    // TC(O(2*n))  // SC(O(1))
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
}

// this is the optimized approach
void rotatebydplaces(vector<int> &nums, int rotvalue)
{

    int d = rotvalue % nums.size();

    reverse(nums.begin(), nums.begin() + d - 1);
    reverse(nums.begin() + d, nums.begin() + nums.size() - 1);

    reverse(nums.begin(), nums.end());

    for (int val : nums)
    {
        cout << val << endl;
    }
}
   