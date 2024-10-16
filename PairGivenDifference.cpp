#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int func(vector<int>&arr, int n, int difference){
      sort(arr.begin(), arr.end());
int i = 0;
int j = 1;
while(i<n && j<n){
    if(i != j && arr[j]-arr[i] == difference){
        return 1;
    }
    if(arr[j]-arr[i] < difference){
        j++;
    }
    else{
        i++;
    }
}
return -1;
}
// Steps to solve are -
// Step 1 : find the time complexity of the sorting 
//Step 2 : try to match the required time complexity as expected from the sorting and searching techniques we know
// Step 3 : think a effective approach after a standard approach if it takes time
// Step 4 : pass all test cases and make sure to pass required conditions of each test case

int main(){
    vector<int>arr(6);
    for(int i =0;i<6;i++){
        cin>>arr[i];
    }
    int difference = 78;
    int res = func(arr,6,difference);
    cout<<res<<endl;
}