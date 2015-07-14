#include <cstdio>

int main(){
	unsigned p, n=0, times=0;
	scanf("%u", &p);
	do{
		n<p/2 ? n+=n+1 : n+=n-p;
		times++;
	}while(n!=0);
	printf("%u\n", times);
	return 0;
}