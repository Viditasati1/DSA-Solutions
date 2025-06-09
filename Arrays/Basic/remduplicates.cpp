// we want to remove duplicates 

// bruteforce approach is using set ds and return its size
//TC(O(n*log(n))+O(n))


// OPTIMIZED APPROACH

//using 2 pointers TC(n)

#include <bits/stdc++.h>
using namespace std;

int remduplicates(vector<int>&nums){
int i=0; 

for(int j=0; j<nums.size(); j++){

if(nums[i]!=nums[j]){
    nums[i]=nums[j];
    i++;
}

}

return i+1;


}