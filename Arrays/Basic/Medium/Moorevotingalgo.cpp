#include <bits/stdc++.h>
using namespace std;

// brute force approach: normal we can use a hashmap to
// store the key value pairs and then can run a
// loop on map to search for majority element
// TC(O(N*logN) + O(N));

// optimized approach(moore voting algo)

int majorityElement(vector<int> &nums)
{

    int cnt = 0;
    int ele;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {

        if (cnt == 0)
        {
            cnt = 1;
            ele = nums[i];
        }
        else if (ele == nums[i])
            cnt++;

        else
            cnt--;
    }

    return ele;
}
