#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(){
	double raio;
	scanf("%lf", &raio);
	printf("A=%.4lf\n", PI * pow(raio, 2));
	return 0;
}