#include <stdbool.h>
bool isPalindrome(int x) {
     if (x < 0)   
        return false;
     int num=x;   
     long long reverse=0;
	while(x>0) {
		int y=x%10;
		reverse=reverse*10+y;
		x=x/10;
	}
	if(num==reverse)
		return true;
	else
		return false;
}