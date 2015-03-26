#include <iostream>
#include <cctype>

using namespace std;

int main(){
	string in;
	while(getline(cin, in)){
		int i, u = 1;
		for (i = 0; in[i] != '\0'; ++i)
			if(in[i]!=' ')
				if(u){
					in[i] = toupper(in[i]);
					u = 0;
				}
				else{
					in[i] = tolower(in[i]);
					u = 1;
				}
		cout << in << endl;
	}
	return 0;
}