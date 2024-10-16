#include<iostream>
using namespace std;

int ceil(int a[] , int start ,int end, int x){
    if(x <= a[start]){
        return start;
    }
    int ans;
    for(int i =start;i<=end;i++){
        if(a[i] == x){
            return i;
        }
     if(a[i] < x && a[i+1]>=x){
     return i+1;
  }
    }
    return -1;
}
int main(){
    int a[] = {1,2,8,10,10,12,19};
    int x = 20;
    int n = sizeof(a)/sizeof(a[0]);
    cout<<n<<endl;
    cout<<sizeof(a)<<endl;
    int res = ceil(a,0,n-1,x);
    if(res == -1){
        cout<<"No ceil present for x ";
    }
    else{
        cout<<"Ceiling of "<< x <<"is "<< a[res]<<endl;
    }
}