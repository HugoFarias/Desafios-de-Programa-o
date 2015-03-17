#include <iostream>
 
using namespace std;
 
int main() {
	int t, i, pa, pb;
	double g1, g2;
	cin >> t;
	for(i = 0; i < t; i++){
		cin >> pa;
		cin >> pb;
		cin >> g1;
		cin >> g2;
		g1 = g1/100 +1;
		g2 = g2/100 +1;
		for (int j = 1; j <= 100; ++j){
			pa *= g1;
			pb *= g2;
			if(pa > pb){
				cout << j << " anos.\n";
				break;
			} 
		}
		if(pb > pa){
		 	cout << "Mais de 1 seculo.\n";
		}
	}
	return 0;
}