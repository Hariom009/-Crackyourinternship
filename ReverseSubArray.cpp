#include<iostream>
using namespace std;
// Time complexity = O(NlogN)
// Space Complexity = O(n)
// best approach for subarray problem  and better than standard O(n3)
bool ReverseSubArray(int arr[] , int n){
   vector<int> temp(n);
   for(int i =0;i<n;i++){
    temp[i] = arr[i];
   }
   sort(temp.begin(), temp.end());
    int firstindex = -1;
    int lastindex = -1;
    for(int i =0;i<n;i++){
     if(arr[i] != temp[i]){
        firstindex = i;
        break;
     }
    }
    for(int j = n-1;j>0;j--){
        if(arr[j] != temp[j]){
            lastindex = j;
            break;
        }
    }
   reverse(arr+firstindex, arr+lastindex+1);
   for(int i =0;i<n;i++){
    if(arr[i] != temp[i]){
        return false;
    }
   }
   return true;
}
int main(){
    int arr[100000];
    for(int i =0;i<5;i++){
        cin>>arr[i];
    }
    bool check = ReverseSubArray(arr,5);
    if(check){
        cout<<"TRUE"<<endl;
    }
    else{
        cout<<"FALSE"<<endl;
    }
}