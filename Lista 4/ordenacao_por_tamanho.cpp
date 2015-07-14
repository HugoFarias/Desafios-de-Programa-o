#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

bool cmp(string x, string y){
	return x.size() > y.size();
}

int main(){
	int n;
	string aux;
	cin >> n;
	getline(cin, aux);
	for (int i = 0; i < n; ++i){
		stringstream ss;
		getline(cin, aux);
		ss.str(aux);
		vector<string> words;
		while(ss >> aux)
			words.push_back(aux);
		stable_sort(words.begin(), words.end(), cmp);
		vector<string>::iterator it;
		for (it = words.begin(); it != words.end()-1; ++it)
			cout << *it << " ";
		cout << *it << endl;
		ss.clear(); words.clear();
	}
	return 0;
}