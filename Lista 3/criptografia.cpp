#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++){
		int j;
		char aux;
		string m;
		getline(cin, m);
		for (j = 0; j < m.size(); j++)
			if((m[j]>='A' && m[j]<='Z') || (m[j]>='a' && m[j]<='z')) m[j] = m[j]+3;
		for (j = 0; j < m.size()/2; j++){
			aux = m[j];
			m[j] = m[m.size() - j - 1];
			m[m.size() - j - 1] = aux;
		}
		for (j = m.size()/2; j < m.size(); j++)
			m[j] = m[j] - 1;
		cout << m << endl;
	}
	return 0;
}