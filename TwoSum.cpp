#include<iostream>
using namespace std;
#include<vector>
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> t;
        int n = nums.size();
     
     
    for(int i =0;i<n;i++){
     for(int j =0;j<n;j++){
        
        if(j>i && nums[i]+nums[j] == target){
            t.push_back(i);
            t.push_back(j);
            break;
        }
     }
        
     }
     return t;
    }
    int main(){
        vector<int> t ;
        t.push_back(3);
        t.push_back(2);
        t.push_back(3);
               vector<int> ans = twoSum(t,6);
       for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
       }
    }