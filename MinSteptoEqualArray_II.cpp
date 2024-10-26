#include<iostream>
using namespace std;
int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int count = 0;
        int i = 0;
         int medianindex= n/2;
        int remove = nums[medianindex];
        while(i<n){
                count += abs(remove - nums[i]); 
             i++;
        }
        return count;
    }