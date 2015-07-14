#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
	return a.second < b.second;
}

int main(){
	int n, x, y, index = 1;
	cin >> n;
	while(n!=0){
		cout.precision(2);
		int i, habitantes = 0, consumo = 0;
		map<int,int> casas;
		for (i = 0; i < n; ++i){
			cin >> x >> y;
			casas[y/x] += x;
			habitantes += x;
			consumo += y;
		}
		cout << "Cidade# " << index << ":\n";
		map<int,int>::iterator it = casas.begin();
		for (i = 0; i < casas.size()-1; ++i){
			cout << it->second << "-" << it->first << " ";
			it++;
		}
		cout << it->second << "-" << it->first << endl << "Consumo medio: " << fixed << (float)((int)(((float)consumo/habitantes)*100))/100 << " m3." << endl;
		index++;
		cin >> n;
		if(n!=0) cout << endl;
	}
	return 0;
}