#include<iostream>
#include<vector>
#include<utility>
using namespace std;

	int minSwaps(vector<int>&nums)
	{
	  int n = nums.size();
    vector<pair<int, int> > v;
    for (int i = 0; i < n; i++) {
        v.push_back(make_pair(nums[i], i));
    }
	  // Time complexity of this sort = O(NlogN)
	  sort(v.begin(),v.end());
	  int countswap = 0;
	  //For this = O(N)
	   for(int i =0;i<nums.size();i++){
	       pair<int,int>p = v[i];
	       int value = p.first;
	       int index = p.second;
	       
// (1,1) (2,2) (3,3) (4,4)
// next step: (2,2) (1,1) (3,3) (4,4) so i should not increase till its i==index

	     if(i != index){
	         countswap++;
	         swap(v[i], v[index]);
	         i--;
	     }
	   }
	   return countswap;
	}
int main(){
   int n;
   cin>>n;
   vector<int>nums(n);
   for(int i =0;i<n;i++){
    cin>>nums[i];
   }
    int minswap = minSwaps(nums);
    cout<<"Minimum Swap reuired to sort :"<<minswap<<endl;
}
