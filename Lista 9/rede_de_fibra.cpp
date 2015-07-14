#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, noA, noB;
	cin >> n;
	while(n!=0){
		vector< vector<string> > grafo(n, vector<string>(n, ""));
		cin >> noA >> noB;
		while(noA != 0 && noB != 0){
			cin >> grafo[noA-1][noB-1] >> noA >> noB;
		}
		cin >> noA >> noB;
		while(noA != 0 && noB != 0){
			//resolve o problema
			cin >> noA >> noB;
		}
		cin >> n;
	}
	return 0;
}