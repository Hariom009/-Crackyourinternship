#include<iostream>
using namespace std;
void printallduplicates(string s){
    if(s.length() ==0){
        return;
    }
    sort(s.begin(), s.end());
    for(int i =0;i<s.length();i++){
        int count = 1;
      while(i<s.length()-1 && s[i] == s[i+1]){
        count++;
        i++;
      }
        if(count>1){
            cout<<s[i]<<" Count :"<<count<<endl;
        }
    }
}
int main(){
    string s;
   getline(cin, s);
   for(int i =0;i<5;i++){
    cout<<s[i]<<" ";
   }
   cout<<endl;
   printallduplicates(s);
}