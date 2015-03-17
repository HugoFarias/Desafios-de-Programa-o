#include <iostream>
 
using namespace std;
 
int main() {
    int value;
    cin >> value;
    std::cout << value << endl;
    std::cout << value/100 << " nota(s) de R$ 100,00" << endl;
    value = value % 100;
    std::cout << value/50 << " nota(s) de R$ 50,00" << endl;
 	value = value % 50;
 	std::cout << value/20 << " nota(s) de R$ 20,00" << endl;
 	value = value % 20;
 	std::cout << value/10 << " nota(s) de R$ 10,00" << endl;
 	value = value % 10;
 	std::cout << value/5 << " nota(s) de R$ 5,00" << endl;
 	value = value % 5;
 	std::cout << value/2 << " nota(s) de R$ 2,00" << endl;
 	value = value % 2;
 	std::cout << value << " nota(s) de R$ 1,00" << endl;
    return 0;
}