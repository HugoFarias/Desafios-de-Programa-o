#include <iostream>
#include <cstdio>
#include <bitset>

using namespace std;

int main(){
	int n;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++){
		int j;
		bitset<26> alpha;
		string in;
		getline(cin, in);
		for (j = 0; j < in.size(); j++)
			if(in[j] >= 'a' && in[j] <= 'z') alpha[in[j] - 'a'] = 1;
		if(alpha.all()) printf("frase completa\n");
		else if(alpha.count() >= 13) printf("frase quase completa\n");
		else printf("frase mal elaborada\n");
		alpha.reset();
	}
	return 0;
}