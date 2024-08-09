 #include<iostream>
 using namespace std;
 #include<vector>
 
 vector<int> findDuplicates(vector<int>& nums) {
        vector<int>t;
        if(nums.size()==1){
            return t;
        }
        sort(nums.begin(), nums.end());
       // int k =0;
        for(int i =0;i<nums.size()-1;i++){

            if(nums.at(i) == nums.at(i+1)){
               t.push_back(nums[i]);
            }
        }
        return t;
    }
