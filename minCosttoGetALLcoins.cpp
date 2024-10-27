#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;

int getallcoins(vector<int>nums, int k){
    sort(nums.begin(), nums.end());
    int i = nums.size()-1;
    int ansindex = ceil(1*nums.size()/(k+1));
    int j = 0, sum =0 ;
    while(j<ansindex){
        sum += nums[j];
        j++;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Enter value of k: "<<endl;
    int k;
    cin>>k;
cout<<getallcoins(nums,k)<<endl;
}