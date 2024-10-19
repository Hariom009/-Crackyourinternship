#include<iostream>
using namespace std;

int minSwap(vector<int> &nums){
    int n = nums.size();
    vector<int> temp(n);
    for(int i =0;i<n;i++){
        temp[i] = nums[i];
    }
    sort(temp.begin(),temp.end());
    int unequal = 0;
	   for(int i = 0;i<n;i++){
	       if(nums[i] != temp[i]){
	           unequal++;
	       }
	   }
	   cout<<unequal<<endl;
	   if(unequal%2 != 0){
	       unequal++;
	   }
	   unequal = unequal/2;
	   return unequal;
}
int main(){
    int n;
    cout<<"Size of the input vector"<<": ";
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int minswap = minSwap(arr);
    cout<<"Minimum Swap reuired to sort :"<<minswap<<endl;
}
