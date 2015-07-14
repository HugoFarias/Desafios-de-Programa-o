#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

bool cmp (char a, char b){
	if(toupper(a) == toupper(b)) return a < b;
	return toupper(a) < toupper(b);
}

int main(){
	int n, i, j;
	string w;
	cin >> n;
	for (i = 0; i < n; ++i){
		cin >> w;
		sort(w.begin(), w.end(), cmp);
		do{
			cout << w << endl;
		}while(next_permutation(w.begin(), w.end(), cmp));
	}
	return 0;
}