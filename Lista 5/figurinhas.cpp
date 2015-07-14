#include <iostream>

using namespace std;

int mdc(int x, int y){
	if(x < y){
		int aux = x;
		x = y;
		y = aux;
	}
	if(x%y==0) return y;
	return mdc(y, x%y);
}

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i){
		int ric, vic;
		cin >> ric >> vic;
		cout << mdc(ric, vic) << endl;
	}
	return 0;
}