#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int t, i, *pa, *pb, years;
	double *g1, *g2;
	cin >> t;
	pa = (int*) malloc(sizeof(int)*t);
	pb = (int*) malloc(sizeof(int)*t);
	g1 = (double*) malloc(sizeof(double)*t);
	g2 = (double*) malloc(sizeof(double)*t);
	for (i = 0; i < t; ++i){
		cin >> pa[i];
		cin >> pb[i];
		cin >> g1[i]; //in %
		cin >> g2[i]; //
		g1[i] = g1[i]/100 + 1;
		g2[i] = g2[i]/100 + 1;
	}
	for (i = 0; i < t; ++i){
		years = 0;
		while(years <= 100 && pa[i] <= pb[i]){
			pa[i] *= g1[i];
			pb[i] *= g2[i];
			years++;
		}
		if(years > 100){
			cout << "Mais de 1 seculo." << endl;
		}else{
			cout << years << " anos." << endl;
		}
	}
	return 0;
}