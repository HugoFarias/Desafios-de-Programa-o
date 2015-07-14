#include <iostream>
#include <vector>

using namespace std;

int main(){
	string in;
	while(cin>>in){
		vector<char> alfa(26, 0);
		for (int i = 0; i < in.size(); ++i){
			alfa[in[i] - 'A']++;
		}
		
		//alfa.clear();
	}
	return 0;
}