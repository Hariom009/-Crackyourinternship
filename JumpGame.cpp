 bool canJump(vector<int>& nums) {
        int maxreach = 0;
        int i =0;
        while(i<nums.size()){
            if(maxreach<i){
                return false;
            }
              maxreach =max(maxreach,i+nums[i]);
            if(maxreach >= nums.size()-1){
                return true;
            }
            i++;
        }
        return false;
    }
