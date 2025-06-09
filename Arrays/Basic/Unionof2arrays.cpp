#include<bits/stdc++.h>
using namespace std;
// brute force approach : use map to store from both the arrays and then return the key values
// also we can use set

// this is the optimized approach
vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> ans;
        int i = 0, j = 0;
        int n = a.size(), m = b.size();

        while(i < n && j < m) {
            if(a[i] < b[j]) {
                if(ans.empty() || ans.back() != a[i]) {
                    ans.push_back(a[i]);
                }
                i++;
            } else if(a[i] > b[j]) {
                if(ans.empty() || ans.back() != b[j]) {
                    ans.push_back(b[j]);
                }
                j++;
            } else {     
                if(ans.empty() || ans.back() != a[i]) {
                    ans.push_back(a[i]);
                }
                i++;
                j++;
            }
        }

        while(i < n) {
            if(ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }
            i++;
        }

        while(j < m) {
            if(ans.empty() || ans.back() != b[j]) {
                ans.push_back(b[j]);
            }
            j++;
        }

        return ans;
    }