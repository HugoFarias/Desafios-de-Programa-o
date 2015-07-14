#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	unsigned long n, median;
	vector<unsigned long> ns;
	while(cin >> n){
		ns.push_back(n);
		sort(ns.begin(), ns.end());
		if(ns.size()%2!=0) cout << ns[ns.size()/2] << endl;
		else cout << (ns[ns.size()/2] + ns[ns.size()/2 - 1])/2 << endl;
	}
	return 0;
}