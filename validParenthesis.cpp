bool ismatch(char a, char b){
    return (a=='(' && b==')' )||
           (a=='[' && b==']') ||
           (a=='{' && b=='}');
}
bool isopen(char c){
    return c=='(' ||
           c=='{' ||
           c == '[';
}
    bool isValid(string s) {
        stack<char>s1;
        for(int i =0;i<s.length();i++){
            char c = s[i];
         if(isopen(c)){
            s1.push(c);
         }
         else{
            if(s1.empty()){
                return false;
            }
         char ontop = s1.top();
         s1.pop();
         if(!ismatch(ontop,c)){
            return false;
         }
        } 
        }
     return s1.empty();
    }
