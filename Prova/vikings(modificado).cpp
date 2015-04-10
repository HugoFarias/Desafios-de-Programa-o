#include <cstdio>
#include <deque>

using namespace std;

int main(){
	int n, i, ind, inst=1;
	scanf("%d", &n);
	while(n!=0){
		deque<char> alfa;
		char aux;
		for (char c = 'A'; c <= 'Z'; ++c)
			alfa.push_back(c);
		printf("Instancia %d\n", inst);
		for (i = 0; i < n; i++){
			scanf("%d", &ind);
			aux = alfa[ind-1];
			printf("%c", aux);
			alfa.erase(alfa.begin() + ind-1);
			alfa.push_front(aux);
		}
		printf("\n\n");
		inst++;
		alfa.clear();
		scanf("%d", &n);
	}
	return 0;
}