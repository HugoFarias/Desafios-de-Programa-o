#include <iostream>
 
using namespace std;
 
int main(){
 	int n, i, j, count = 0;
 	cin >> n;
 	for (i = 0; i < n; ++i){
 		for (j = 1; j <= 3; ++j){
 			std::cout << j+count << " ";
 		}
 		count+=4;
 		std::cout << "PUM" << endl;
 	}
    return 0;
}