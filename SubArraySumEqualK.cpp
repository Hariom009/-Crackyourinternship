 #include<iostream>
 using namespace std;

 int subarraySum(vector<int>& nums, int k) {
        int i = 0;
        int count = 0, j, sum = 0;
        for(int p=0;p<nums.size();p++){
            if(nums[p] == k){
                count++;
            }
        }
        while(i<nums.size()){
            j = i+1;
            sum = nums[i];
           while(j<nums.size()){
            sum += nums[j];
            if(sum == k ){
                count++;
            }
            j++;
           }
            i++;
        }
        return count;
    }
