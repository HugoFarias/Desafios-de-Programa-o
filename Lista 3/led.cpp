#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int n_leds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
		int leds = 0;
		string v;
		cin >> v;
		for (int j = 0; j < v.size(); j++)
			leds += n_leds[v[j] - '0'];
		printf("%d leds\n", leds);
	}
	return 0;
}