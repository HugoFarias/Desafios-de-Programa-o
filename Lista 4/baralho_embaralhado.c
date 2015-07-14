#include <stdio.h>

int main(){
	unsigned p, n=0, times=0;
	scanf("%u", &p);
	do{
		if(n<p/2) n+=n+1;
		else n+=n-p;
		times++;
	}while(n!=0);
	printf("%u\n", times);
	return 0;
}