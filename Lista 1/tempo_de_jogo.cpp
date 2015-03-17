#include <iostream>

using namespace std;

int main(){
	int init, final;
	cin >> init;
	cin >> final;
	std::cout << "O JOGO DUROU ";
	if(init == final) std::cout << 24;
	else if(init < final) std::cout << final - init;
	else std::cout << 24 - (init - final);
	std::cout << " HORA(S)" << endl;
	return 0;
}