#include <bits/stdc++.h>
using namespace std;

// brute force can be using hash array and using map data structure


// optimized approach 
// xor of 2 same numbers is 0
int singlenum(vector<int> &nums)
{
    int xori = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        xori = xori ^ nums[i];
    }

    return xori;
}