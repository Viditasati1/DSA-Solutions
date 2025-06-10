#include <bits/stdc++.h>
using namespace std;


// brute force approach  //(O(n*n))
vector<int>two_sum(vector<int>&nums,int target){
    int n=nums.size();
for(int i=0; i<n; i++){
 for(int j=i+1; j<n-1; j++){

    if(nums[i]+nums[j]==target){
        return {i,j};
    }
 }
 }
}



// better approach 
// using map and hashing

vector<int>two_sum(vector<int>&nums,int target){
map<int,int>mp;
int n=nums.size();
for(int i=0; i<n; i++){
int num=nums[i];
int rem=target-num;

if(mp.find(rem)!=mp.end()){
    return {mp[rem],i};
}

mp[num]=i;

}

return {-1,-1}; // in case if npt found


}





// optimized approach using 2 pointers

vector<int>two_sum(vector<int>&nums, int target){
    sort(nums.begin(), nums.end());
int n=nums.size();
int l=0;
int r=n-1;

while(l<r){

int sum=nums[l]+nums[r];
if(sum==target)return {l,r};

else if(sum<target){
    l++;
}

else r--;
}
}