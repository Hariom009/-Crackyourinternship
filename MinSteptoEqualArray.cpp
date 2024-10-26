#include<iostream>
using namespace std;
int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int n = nums.size();
        int remove = nums[0];
        int i = n-1;
        while(i>=0){
            nums[i] = nums[i] - nums[0];
            count = count+nums[i];
        i--;
        }
        return count;
    }