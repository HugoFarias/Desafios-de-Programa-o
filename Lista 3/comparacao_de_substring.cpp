#include <iostream>

using namespace std;

int main(){
	string in;
	while(getline(cin, in)){
		int i, j, k, cnt, cand = 0;
		string pair;
		getline(cin, pair);
		for (i = 0; i < in.size(); ++i){
			for (j = 0; j < pair.size(); ++j){
				if(in[i] == pair[j]){
					k = 0; cnt = 0;
					while(i+k<in.size() && j+k<pair.size() && in[i+k] == pair[j+k]){
						cnt++;
						k++;
					}
					if(cnt>cand) cand = cnt;
					j += k;
				}
			}
		}
		cout << cand << endl;
	}
	return 0;
}