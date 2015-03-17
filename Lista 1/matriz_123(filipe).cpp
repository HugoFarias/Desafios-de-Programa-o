#include <iostream>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		int d = n-1, u = 0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if( j == d ) cout << 2;
				else if( j == u ) cout << 1;
				else cout << 3;
			}
			u++;
			d--;
			cout << endl;
		}
	}
	return 0;
}