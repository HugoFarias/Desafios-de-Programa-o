#include <iostream>
#include <cstdio>
//#include <cstring>
#include <cstdlib>

using namespace std;

void bin(int a){
	if(a!=0){
		bin(a/2);
		printf("%d", (a%2));
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i){
		int b;
		string number;
		//char base[4];
		string base;
		cin >> number;
		const char *num = number.c_str();
		//scanf("%s", base);
		cin >> base;
		printf("Case %d:\n", i);
		if(base == "bin"){//(!strcmp(base, "bin")){
			b = (int) strtol(num, NULL, 2);
			printf("%d dec\n%x hex\n\n", b, b);
		}else if(base == "dec"){//(!strcmp(base, "dec")){
			b = atoi(num);
			printf("%x hex\n", b);
			bin(b);
			printf(" bin\n\n");
		}else if(base == "hex"){//(!strcmp(base, "hex")){
			b = (int) strtol(num, NULL, 16);
			printf("%d dec\n", b);
			bin(b);
			printf(" bin\n\n");
		}
	}
	return 0;
}