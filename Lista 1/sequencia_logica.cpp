#include <iostream>
 
using namespace std;
 
int main() {
	int n, i, i2, i3;
	cin >> n;
	for (i = 1; i <= n; ++i){
		i2 = i*i;
		i3 = i*i*i;
		std::cout << i << " " << i2 << " " << i3 << endl;
		std::cout << i << " " << i2+1 << " " << i3+1 << endl;
	}
    return 0;
}