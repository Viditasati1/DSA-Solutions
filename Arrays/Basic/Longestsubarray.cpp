#include <bits/stdc++.h>
using namespace std;

// brute force : generate all subarrays O(n*n*n);

// better using prefixsum+map
// works well for  negatives values as well
int longestsubarray(vector<int> &nums, int k)
{
    long long int sum = 0;
    int n = nums.size();
    map<int, int> mp;
    int maxlen = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];

        if (sum == k)
        {
            maxlen = max(maxlen, i + 1);
        }

        int rem = sum - k;

        if (mp.find(rem) != mp.end())
        {
            int len = i - mp[rem];
            maxlen = max(maxlen, len);
        }

        if (mp.find(sum) == mp.end())
            mp[sum] = i;
    }

    return maxlen;
}

// optimal using 2 pointers but doesnt works for negatives and zeros

int getLongestSubarray(vector<int> &a, long long k)
{
    int n = a.size();

    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    while (right < n)
    {

        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }

        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if (right < n)
            sum += a[right];
    }

    return maxLen;
}