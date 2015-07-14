#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#define P 131071

using namespace std;

int main(){
	typedef unsigned long long ull;
	string in;
	ull nums[200][2],prod;
	int idx=0, resto, i, j;
	while(getline(cin, in)){
		if(in[in.size()-1] != '#'){
			if(in.size() > 64){
				nums[idx][0] = (ull) strtoul(in.substr(0, 64).c_str(), NULL, 2);
				nums[idx][1] = 64;
				in = in.substr(65, in.size()-64);
				idx++;
			}
			nums[idx][0] = (ull) strtoul(in.c_str(), NULL, 2);
			nums[idx][1] = in.size();
			idx++;
			continue;
		}
		in.erase(in.end()-1); //put # out
		if(in.size() > 64){
			nums[idx][0] = (ull) strtoul(in.substr(0, 64).c_str(), NULL, 2);
			nums[idx][1] = 64;
			in = in.substr(65, in.size()-64);
			idx++;
		}
		nums[idx][0] = (ull) strtoul(in.c_str(), NULL, 2);
		nums[idx][1] = in.size();

		resto = 0;
		for (i = 0; i < idx; ++i){
			prod = 1;
			for(j = idx; j > i; j--){
				prod *= ((ull)pow(2, nums[j][1])) % P;
			}
			resto += ((nums[i][0]%P) * prod%P) % P;
		}
		resto += nums[i][0]%P;
		resto %= P;
		if(resto==0) cout << "YES\n";
		else cout << "NO\n";
		idx=0;
	}
	return 0;
}