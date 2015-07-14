#include <iostream>
#include <vector>

using namespace std;

vector<int> max_qt(const vector<int> &qt, const vector<int> &vec1, const vector<int> &vec2){
	int qt1 = 0, qt2 = 0;
	for (int i = 0; i < vec1.size(); i++)
		qt1 += qt[vec1[i]];
	for (int i = 0; i < vec2.size(); i++)
		qt2 += qt[vec2[i]];
	if(qt1 > qt2) return vec1;
	return vec2;
}

vector<int> packs(const vector<int> &qt, const vector<int> &peso, int n, int pesoMax, vector < vector< vector<int> > > &table){
	if(n > 0){
		if(table[n-1][pesoMax].size() == 0){
			if(peso[n-1] > pesoMax){
				table[n-1][pesoMax] = packs(qt, peso, n-1, pesoMax, table);
			}else{
				vector<int> pWith = packs(qt, peso, n-1, pesoMax-peso[n-1], table);
				pWith.push_back(n-1);
				table[n-1][pesoMax] = max_qt(qt, pWith, packs(qt, peso, n-1, pesoMax, table));
			}
		}
		return table[n-1][pesoMax];
	}
	return vector<int>();
}

int main(){
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++) {
		int pac, j, qtFinal = 0, pesoFinal = 0;
		cin >> pac;
		vector<int> qt(pac, 0), peso(pac, 0), escolhidos;
		for (j = 0; j < pac; j++)
			cin >> qt[j] >> peso[j];
		vector< vector< vector<int> > > table(pac, vector< vector<int> >(51, vector<int>()));
		escolhidos = packs(qt, peso, pac, 50, table);
		for (vector<int>::iterator it = escolhidos.begin(); it != escolhidos.end(); it++) {
			qtFinal += qt[*it];
			pesoFinal += peso[*it];
		}
		cout << qtFinal << " brinquedos\nPeso: " << pesoFinal << " kg\nsobra(m) " << pac-escolhidos.size() << " pacote(s)\n\n";
	}
	return 0;
}