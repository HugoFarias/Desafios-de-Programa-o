#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){
	string palavra;
	int n, i;
	cin >> n;
	vector<string> verbos(n);
	for (i = 0; i < n; ++i)
		cin >> verbos[i];
	cin >> n;
	getline(cin, palavra);//limpando o buffer
	for (i = 1; i <= n; ++i){
		stringstream line;
		string sujeito = "", objeto = "";
		getline(cin, palavra);
		line << palavra;
		cout << "Frase #" << i << endl;
		line >> palavra;
		if(palavra == "O" || palavra == "A" || palavra == "Os" || palavra == "As"){ //se palavra e artigo
			cout << palavra << " : artigo\n";
			sujeito = palavra;
			line >> palavra;
			cout << palavra << " : substantivo\n";
			sujeito += " " + palavra;
			line >> palavra;
			//VERBO
		}else{
			vector<string>::iterator it;
			for (it = verbos.begin(); it != verbos.end(); ++it)
				if(palavra == *it) break;
			if(it == verbos.end()){ //nao e verbo nem artigo, logo e substantivo
				cout << palavra << " : substantivo\n";
				sujeito = palavra;
				line >> palavra;
				//VERBO
			}
		}
		cout << palavra << " : verbo\n";
		line >> palavra;
		if(line.eof()){
			if(!sujeito.empty()) cout << "<sujeito> : " << sujeito << endl;
			cout << endl;
			continue;
		}
		if(palavra == "o" || palavra == "a" || palavra == "os" || palavra == "as"){
			cout << palavra << " : artigo\n";
			objeto = palavra + " ";
			line >> palavra;
		}
		cout << palavra << " : substantivo\n";
		objeto += palavra;
		if(!sujeito.empty()) cout << "<sujeito> : " << sujeito << endl;
		cout << "<objeto> : " << objeto << endl << endl;
	}
	return 0;
}