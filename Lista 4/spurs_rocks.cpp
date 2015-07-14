#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct team {
	int id, pontos, cestas, recebidas;
};

bool cmp(team a, team b){
	if(a.pontos > b.pontos) return true;
	if(b.pontos > a.pontos) return false;
	float avgA = a.cestas, avgB = b.cestas;
	if(a.recebidas != 0) avgA /= a.recebidas;
	if(b.recebidas != 0) avgB /= b.recebidas;
	if(avgA > avgB) return true;
	if(avgB > avgA) return false;
	if(a.cestas > b.cestas) return true;
	if(b.cestas > a.cestas) return false;
	if(a.id > b.id) return true;
	return false;
}

int main(){
	int n, i, x, y, z, w, h = 1;
	team zero = {0, 0, 0, 0};
	cin >> n;
	while(n!=0){
		vector<team> tabela(n, zero);
		for (i = 0; i < n*(n-1)/2; ++i){
			cin >> x >> y >> z >> w;
			tabela[x-1].id = x; tabela[z-1].id = z;
			tabela[x-1].cestas += y; tabela[z-1].recebidas += y;
			tabela[z-1].cestas += w; tabela[x-1].recebidas += w;
			if(y > w){
				tabela[x-1].pontos += 2;
				tabela[z-1].pontos++;
			}else{
				tabela[z-1].pontos += 2;
				tabela[x-1].pontos++;
			}
		}
		sort(tabela.begin(), tabela.end(), cmp);
		cout << "Instancia " << h << endl;
		vector<team>::iterator j;
		for (j = tabela.begin(); j != tabela.end()-1; ++j)
			cout << (*j).id << " ";
		cout << (*j).id << endl;
		h++;
		cin >> n;
		if(n!=0) cout << endl;
	}
	return 0;
}