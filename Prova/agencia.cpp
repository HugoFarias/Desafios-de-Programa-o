#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
#include <vector>
#include <iterator>
#include <set>

using namespace std;

int main(){
	string trajeto;
	cin >> trajeto;
	map< string, vector<int> > trjs;
	while(trajeto.compare("ELIMINA")){
		int k, i, nAux;
		//scanf("%d", &k);
		cin >> k;
		vector<int> mapas;
		for (i = 0; i < k; ++i){
			cin >> nAux;
			//scanf("%d", &nAux);
			mapas.push_back(nAux);
		}
		trjs[trajeto] = mapas;
		cin >> trajeto;
	}
	int algum = 0;
	set<int> resp;
	while(cin >> trajeto){
		vector<int> vt;
		vt = trjs[trajeto];
		trjs.erase(trajeto);
		for (map<string, vector<int> >::iterator i = trjs.begin(); i != trjs.end(); ++i){
			for (vector<int>::iterator j = (i->second).begin(); j != (i->second).end(); ++j){
				for (int k = 0; k < vt.size(); ++k){
					if(*j == vt[k]) vt[k] = -1;
				}
			}
		}
		for (vector<int>::iterator i = vt.begin(); i != vt.end(); ++i){
			if(*i != -1){
				resp.insert(*i);
				algum = 1;
			}
		}
	}
	copy(resp.begin(), resp.end(), std::ostream_iterator<int>(std::cout, " "));
	if(!algum) cout << "NENHUM";
	trjs.clear();
	return 0;
}