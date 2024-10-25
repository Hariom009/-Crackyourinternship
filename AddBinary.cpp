#include<iostream>
using namespace std;
 string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        string ans = "";
        int carry = 0;
        while(i>=0 || j>=0 || carry){
            int sum = carry;
        if(i>=0){
            sum += a[i]-'0';
            i--;
        }
        if(j>=0){
            sum+= b[j]-'0';
           j--;
        }
         ans = char((sum%2)+'0')+ans;
         carry = sum/2;
        }
        return ans;
    }