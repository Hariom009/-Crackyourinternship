#include<iostream>
#include<algorithm>
using namespace std;
// Time COMPLEXITY of SORT = O(nlogn)
//For loop is O(n) 
// Final function = O(nlogn)
bool func(int a[] ,int b[],int n,int k){
    sort(a,a+n);
    sort(b, b+n , greater<int>());
for(int i =0;i<n;i++){
    if(a[i]+b[i] < k){
        return false;
    }
  }
  return true;
}
//This is basically in both arrays we should permutate such that no iteration can be less than k or must be greater than equal to k
// a+b >= k

int main(){
    int a[] = {2 ,3,5};
    int b[] = {8,6,1};
    int n = 3;

    int find = 6;
    bool check = func(a,b,n,find);
if(check){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}