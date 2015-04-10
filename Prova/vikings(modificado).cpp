#include <cstdio>
#include <deque>

using namespace std;

void dq_charge(deque<char>* d){
	d->push_front('Z');
	d->push_front('Y');
	d->push_front('X');
	d->push_front('W');
	d->push_front('V');
	d->push_front('U');
	d->push_front('T');
	d->push_front('S');
	d->push_front('R');
	d->push_front('Q');
	d->push_front('P');
	d->push_front('O');
	d->push_front('N');
	d->push_front('M');
	d->push_front('L');
	d->push_front('K');
	d->push_front('J');
	d->push_front('I');
	d->push_front('H');
	d->push_front('G');
	d->push_front('F');
	d->push_front('E');
	d->push_front('D');
	d->push_front('C');
	d->push_front('B');
	d->push_front('A');
}

int main(){
	int n, i, ind, inst=1;
	scanf("%d", &n);
	while(n!=0){
		deque<char> alfa(26);
		char aux;
		dq_charge(&alfa);
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