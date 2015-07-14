#include <cstdio>

int main(){
	int n;
	scanf("%d", &n);
	while(n!=0){
		int ns[n];
		int i, aux, changes = 0;
		for (i = 0; i < n; ++i)
			scanf("%d", ns+i);
		for (i = 0; i < n; i++){
			while(ns[i] != i+1){
				changes += 2*(ns[i] - i) + 1;
				aux = ns[i];
				ns[i] = ns[ns[i]-1];
				ns[aux-1] = aux;
			}
		}
		if(changes%2==0) printf("Carlos\n");
		else printf("Marcelo\n");
		scanf("%d", &n);
	}
	return 0;
}