#include <iostream>
#include <cstdlib>

using namespace std;

int mdc(int x, int y){
	if(x%y==0) return y;
	else return mdc(y, x%y);
}

int main(){
	int n, pair = 1;
	cin >> n;
	for (int i = 0; i < n; ++i){
		string first, second;
		cin >> first >> second;
		int f = (int) strtol(first.c_str(), NULL, 2), s = (int) strtol(second.c_str(), NULL, 2);
		int min, max;
		if(f>s){
			max = f;
			min = s;
		}else{
			max = s;
			min = f;
		}
		int maxdiv = mdc(max, min);
		if(maxdiv>1) cout << "Pair #" << pair << ": All you need is love!" << endl;
		else cout << "Pair #" << pair << ": Love is not all you need!" << endl;
		pair++;
	}
	return 0;
}