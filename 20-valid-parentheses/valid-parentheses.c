bool isValid(char* s){
    int n=strlen(s),top=-1;
    char stack[n];
    for(int i=0;i<n;i++){
        char c=s[i];
        if(c=='('||c=='{'||c=='[')
          stack[++top]=c;
        else if(top==-1) 
          return false;
        else if((c==')'&&stack[top]!='(')||(c=='}'&&stack[top]!='{')||(c==']'&&stack[top]!='[')) 
          return false;
        else
          top--;
    }
    return
      top==-1;
}