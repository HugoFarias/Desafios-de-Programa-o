#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int m;

bool cmp(int a, int b){
	if(a%m < b%m) return true;
	if(a%m > b%m) return false;
	if(a%2==0 && b%2!=0) return false;
	if(a%2!=0 && b%2==0) return true;
	if(a%2!=0 && b%2!=0) return a > b;
	return a < b;
}

int main(){
	int n;
	cin >> n >> m;
	while(n!=0 || m != 0){
		vector<int> ns(n,0);
		for (int i = 0; i < n; ++i)
			cin >> ns[i];
		sort(ns.begin(), ns.end(), cmp);
		cout << n << " " << m << endl;
		for (vector<int>::iterator it = ns.begin(); it != ns.end(); ++it)
			cout << *it << endl;
		cin >> n >> m;
	}
	cout << "0 0\n";
	return 0;
}