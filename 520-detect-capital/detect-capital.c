bool detectCapitalUse(char* word) {
    

    int i = 0,s=0,c=0;

    while (word[i] != '\0') {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            s++;
        }
        c++;
        i++;
    }

    if(s==c){
        return true;
    }
    if(s==0){
        return true;
    }
    if(s==1 && word[0] >= 'A' && word[0] <= 'Z' ){
        return true;
    }
    return false;
}