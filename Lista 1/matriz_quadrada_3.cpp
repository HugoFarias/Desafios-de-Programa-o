#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
	int highN, t, cont = 0, ns[100], elt;
	do{
		cin >> ns[cont];
		cont++;
	}while(ns[cont-1] != 0);

	for (int i = 0; i < cont-1; i++){
		if (ns[i] < 0 || ns[i] > 15){
			std::cout << "ERROR!!!!!!!!!!!!!!!!" << endl;
			break;
		}
		t = 0;
		highN = pow(2, 2*(ns[i]-1));
		while(highN != 0){
			t++;
			highN /= 10;
		}

		for (int j = 0; j < ns[i]; j++){
			elt = pow(2, j);
			for (int k = 0; k < ns[i]; k++){
				if(k!=0) std::cout << " ";
				std::cout << setw(t) << right << elt;
				elt *= 2;
			}
			std::cout << endl;
		}

		std::cout << endl;
	}
    return 0;
}