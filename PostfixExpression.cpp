#include<iostream>
using namespace std;
int evaluatePostfix(string S)
    {
       stack<int> s;
       for(int i =0;i<S.length();i++){
           if(isdigit(S[i]) ){
               s.push(S[i]-'0');
           }
           else{
               int val1 = s.top();
               s.pop();
               int val2 = s.top();
               s.pop();
               switch(S[i]){
                   case '+':
                   s.push(val1+val2);
                   break;
                   case '-':
                    s.push (val2-val1);
                    break;
                   case'*':
                    s.push(val1*val2);
                    break;
                   case'/':
                    s.push(val2/val1);
                    break;
               }
           }
       }
       return s.top();
    }