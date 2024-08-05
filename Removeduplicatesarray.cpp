#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int removeduplicates(int nums[],int n){
        sort(nums , nums+n);
        int k = 0;
        for(int i=0;i<n;i++){
            if(nums[i] != nums[k]){
                k = k+1;
                nums[k] = nums[i];
            }
        }
        return k+1;
}
int main(){
int arr[5] = {1,2,2,1,2};
int ans = removeduplicates(arr,5);
   for(int i =0;i<ans;i++){
    cout<<arr[i]<<" ";
   }
}