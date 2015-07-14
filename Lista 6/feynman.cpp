//#include <iostream>
#include <cstdio>

//using namespace std;

int main(){
	int n;
	//cin >> n;
	scanf("%d", &n);
	while(n != 0){
		int i, resp = 1;
		for(i = n; i > 1; i--)
			resp += i*i;
		//cout << resp << endl;
		printf("%d\n", resp);
		//cin >> n;
		scanf("%d", &n);
	}
	return 0;
}