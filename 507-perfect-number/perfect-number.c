bool checkPerfectNumber(int num) {
    int c=0;
    if (num <= 1){
        return false;}
    for(int i=1;i<=num/2;i++){
        if((num%i)==0){
            c=c+i;
        }

    }
        return c==num;
    
}