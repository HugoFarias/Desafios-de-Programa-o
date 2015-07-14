#include <iostream>
#include <vector>
#include <climits>

using namespace std;

long long n_seqs(const vector<int> &sequence, int first, int t_subSeq, vector< vector<long long> > &table){
	if(t_subSeq == 0) return 1;
	if(sequence.size()-first < t_subSeq) return 0;
	if(table[first-1][t_subSeq-1] != -1) return table[first-1][t_subSeq-1];
	long long resp = 0;
	for (int i = first; i < sequence.size(); i++)
		if(sequence[i] > sequence[first-1]) resp += n_seqs(sequence, i+1, t_subSeq-1, table);
	table[first-1][t_subSeq-1] = resp;
	return resp;
}

int main(){
	int n, k, i;
	cin >> n >> k;
	while (n != 0 && k != 0) {
		vector<int> apostas(n+1, 0);
		vector< vector<long long> > table(n, vector<long long>(k, -1));
		apostas[0] = INT_MIN;
		for(i = 1; i <= n; i++)
			cin >> apostas[i];
		cout << n_seqs(apostas, 1, k, table) << endl;
		cin >> n >> k;
	}
	return 0;
}