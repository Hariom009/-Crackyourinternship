#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#include"Node.cpp"
int getDecimalValue(Node* head) {
        if(head == NULL){
            return 0;
        }
        Node* temp = head;
       vector arr;
       while(temp !=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
       }
        int n = arr.size();
        int res = 0,j=0;
        for(int i =n-1;i>=0;i--){
        res = res + arr[i] * pow(2,j);
        j++;
        }
        return res;
    }