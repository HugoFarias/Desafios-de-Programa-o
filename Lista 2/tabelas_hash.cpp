#include <cstdio>
#include <queue>
 
using namespace std;
 
int inline fhash(int i, int t){
    return i % t;
}
 
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int m, c, j, aux, k;
        scanf("%d %d", &m, &c);
        queue<int> hashtable[m];
        for (j = 0; j < c; j++){
            scanf("%d", &aux);
            hashtable[fhash(aux, m)].push(aux);
        }
        for (j = 0; j < m; j++){
            printf("%d -> ", j);
            if(!hashtable[j].empty()){
                int hSize = hashtable[j].size();
                for (k = 0; k < hSize; k++){
                    printf("%d -> ", hashtable[j].front());
                    hashtable[j].pop();
                }
            }
            printf("\\\n");
        }
        if(i<n-1) printf("\n");;
    }
    return 0;
}