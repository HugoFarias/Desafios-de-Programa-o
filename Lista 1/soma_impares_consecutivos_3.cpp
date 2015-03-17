#include <iostream>
#include <cstdlib>

using namespace std;
 
int main() {
	int n, *x, *y, i, aux;
	cin >> n;
	x = (int*) malloc(sizeof(int)*n);
	y = (int*) malloc(sizeof(int)*n);
	for (i = 0; i < n; i++){
		cin >> x[i];
		cin >> y[i];
	}
	for (i = 0; i < n; i++){
		aux = 0;
		if(!(x[i]%2)) x[i]++;
		for(int j = 0; j < y[i]; j++){
			aux += x[i];
			x[i] +=2;
		}
		cout << aux << endl;
	}
	free(x); free(y);
    return 0;
}