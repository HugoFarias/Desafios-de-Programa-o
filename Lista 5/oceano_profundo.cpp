#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	string in = "", aux;
	int i, j, cont, last, final;
	string::iterator it;
	while(getline(cin, aux)){
		if(in[in.size()-1] != '#') in+=aux;
		else in = aux;
		if(in[in.size()-1] != '#') continue;
		cont = in.size()-1;
		for (it = in.begin(); it != in.end()-1; ++it){
			if(*it == '0') cont--;
			else break;
		}
		while(cont>=17){
			cout << "cont: " << cont << " in: " << in << endl;
			last = in.size()-2;
			final = last-16;
			for (i = last; i >= final; --i){
				if(in[i]=='1') in[i] = '0';
				else{
					j = i;
					do{
						in[j] = '1';
						j--;
					}while(in[j]=='0');
					in[j] = '0';
				}
			}
			for (; it != in.end()-1; ++it){
				if(*it == '0') cont--;
				else break;
			}
		}
		if(!cont) printf("YES\n"); //cout << "YES\n";
		else printf("NO\n"); //cout << "NO\n";
	}
	return 0;
}