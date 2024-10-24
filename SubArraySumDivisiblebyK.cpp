#include<iostream>
using namespace std;
int SubSumDivisibleByK(vector<int>nums,int k){
int n = nums.size();
unordered_map<int,int>mp;
mp[0] = 1;
int count = 0,sum =0;

for(int i =0;i<n;i++){
    sum += nums[i];
    int rem = sum%k;
    //Corner case of negative remainder 
    if(rem<0){
        rem = rem+k;
    }
    if(mp.find(rem) != mp.end()){
        count += mp[rem];
    }
    mp[rem]++;
}
return count;
}