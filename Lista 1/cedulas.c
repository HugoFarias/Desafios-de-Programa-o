#include <stdio.h>

int main(){
	int N, aux, C = 100, cont = 0;
	scanf("%d", &N);
	aux = N;
	printf("%d\n", N);
	while(aux != 0){
		if(aux-C >= 0){
			aux -= C;
			cont++;
		}else{
			printf("%d nota(s) de R$ %d,00\n", cont, C);
			cont = 0;
			switch (C){
				case 100:
					C = 50;
					break;
				case 50:
					C = 20;
					break;
				case 20:
					C = 10;
					break;
				case 10:
					C = 5;
					break;
				case 5:
					C = 2;
					break;
				case 2:
					C = 1;
			}
		}
	}
	printf("%d nota(s) de R$ %d,00\n", cont, C);
	if(C > 50) printf("0 nota(s) de R$ 50,00\n");
	if(C > 20) printf("0 nota(s) de R$ 20,00\n");
	if(C > 10) printf("0 nota(s) de R$ 10,00\n");
	if(C > 5) printf("0 nota(s) de R$ 5,00\n");
	if(C > 2) printf("0 nota(s) de R$ 2,00\n");
	if(C > 1) printf("0 nota(s) de R$ 1,00\n");
	return 0;
}