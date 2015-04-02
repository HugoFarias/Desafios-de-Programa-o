#include <cstdio>
#include <vector>

using namespace std;

int main(){
	int n, i, j, inst = 1, aux;
	scanf("%d", &n);
	while(n!=0){
		vector<vector<int> > mat(n, vector<int>(n));
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				scanf("%d", &aux);
				mat[i][j] = aux;
			}
		}
		printf("Instancia #%d\n", inst);
		if(n==1){
			printf("A matriz e inca.\n\n");
			scanf("%d", &n);
			continue;
		}
		int old = mat[0][0], ind = 0, ord = n;
		while(ord>1){
			for(i=ind; i<n-ind; i++){
				if(mat[ind][i] != old) goto Wrong;
				old++;
			}
			for(i=ind+1; i<n-ind; i++){
				if(mat[i][n-ind-1] != old) goto Wrong;
				old++;
			}
			for(i=n-ind-2; i>=ind; i--){
				if(mat[n-ind-1][i] != old) goto Wrong;
				old++;
			}
			for(i=n-ind-2; i>ind; i--){
				if(mat[i][ind] != old) goto Wrong;
				old++;
			}
			ind++;
			ord -= 2;
		}
		if(ord == 1){
			if(mat[n/2][n/2] != old) goto Wrong;
		}
		printf("A matriz e inca.\n\n");
		goto Finish;
		Wrong: printf("A matriz nao e inca.\n\n");
		Finish:
		inst++;
		scanf("%d", &n);
	}
	return 0;
}