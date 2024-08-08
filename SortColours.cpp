  #include<iostream>
  using namespace std;
  #include<vector>
  void sortColors(vector<int>& nums) {
        if(nums.size() == 1){
            return;
        }
        
        int count0 = 0, count1= 0,count2 = 0;
       for(int i =0;i<nums.size();i++){
        if(nums[i] == 0){
            count0++;
        }else if(nums[i] == 1){
            count1++;
        }else {
            count2++;}}
      
      for(int i =0;i<nums.size();i++){
        if(i<count0){
            nums[i] = 0;
        }
        else if(i>=count0+count1){
         nums[i] = 2;
        }
        else{
            nums[i] =1;
        }
      }
    }