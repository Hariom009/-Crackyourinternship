 #include<iostream>
 using namespace std;
 string convertToTitle(int columnNumber) {
        string s = "";
       while(columnNumber > 0){
        columnNumber--;
        int res = columnNumber%26;
        s = char('A'+res)+s;
      columnNumber = columnNumber/26;
       }
       return s;
    }