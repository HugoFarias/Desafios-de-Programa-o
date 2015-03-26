#include <stdio.h>
#include <string.h>

int main(){
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		int one = 0, two = 0;
		char in[6];
		scanf("%s", in);
		if (strlen(in) == 5) printf("3\n");
		else{
			if(in[0] == 'o') one++;
			else if(in[0] == 't') two++;
			if(in[1] == 'n') one++;
			else if(in[1] == 'w') two++;
			if(in[2] == 'e') one++;
			else if(in[2] == 'o') two++;
			if(one > two) printf("1\n");
			else printf("2\n");
		}
	}
	return 0;
}
