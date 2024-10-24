 #include<iostream>
 using namespace std;
 int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n ==1){
            return nums[0];
        }
        int temp , maxProduct = 0;
        for(int i =0;i<n;i++){
            temp = nums[i];
            if(nums[i] > maxProduct){
                maxProduct = nums[i];
            }
            for(int j = i+1;j<n;j++){
               temp = temp*nums[j];
               if(temp >= maxProduct){
                maxProduct = temp;
               }
               if(nums[j] > maxProduct){
                maxProduct = nums[j];
               }
            }
        }
        return maxProduct;
    }