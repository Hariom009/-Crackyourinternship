int substring(string a, string b){
    int index = -1;
    for(int i =0;i<=a.length()-b.length();i++){
        if(a[i] == b[0]){
       index = i;
        bool match = true;
    for(int j = 1;j<b.length();j++){
        if(a[i+j] != b[j]){
            match = false;
            break;
        }
      }
      if(match){
        return index;
      } 
    }
 }
    
    return -1;
}
    int strStr(string haystack, string needle) {
        if(needle.length() ==0){
            return 0;
        }
        if(needle.length()>haystack.length()){
            return -1;
        }
       return substring(haystack, needle);
    }
