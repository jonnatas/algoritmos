#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	int type;
	typedef decltype (type) TD;
	double valor;

	double N;
	int aux;

	scanf("%lf", &N);

	printf("NOTAS:\n");
	aux = (int) N/100;
	
	printf("%d nota(s) de R$ 100.00\n",aux);

	
}