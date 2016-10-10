#include <iostream>
#include <vector>
#include <unordered_map>

int main(int argc, char const *argv[])
{

	std::unordered_map<float, int > NOTAS {{100.00,0},{50.00,0}, {20.00,0},{10.00,0},{5.00,0},{2.00,0},{1.00,0},{0.50,0}, {0.25,0},{0.10,0},{0.05,0},{0.01,0}};

	double N;

	scanf("%lf", &N);
	long Nint = (long) 100*N;

	printf("NOTAS:\n");

	long aux = 0; 
	
	for (auto i : NOTAS)
	{

		//printf("%f -- %d\n",i.first, i.second);
	
		aux = i.first*100;
		i.second =(int) Nint/aux;
		printf("\naux %ld - Nint %ld - i.second %d",aux, Nint, i.second);
		
	/*
		aux = (int)i.first*100;
		i.second = (int) Nint/(aux);
		printf("%d nota(s) de R$ 100.00\n", i.second);
		Nint = Nint%(aux);
	 code */
	}
	/*
	NOTAS[100.00] = (long) Nint/10000;
	printf("%d nota(s) de R$ 100.00\n", NOTAS[100.00]);
	rest = Nint%10000;

	NOTAS[50.00] = (long) rest/5000;
	printf("%d nota(s) de R$ 50.00\n", NOTAS[50.00]);
	rest = rest%5000;

	NOTAS[20.00] = (long) rest/2000;
	printf("%d nota(s) de R$ 20.00\n", NOTAS[20.00]);
	rest = rest%2000;

	NOTAS[10.00] = (long) rest/1000;
	printf("%d nota(s) de R$ 10.00\n", NOTAS[10.00]);
	rest = rest%1000;

	NOTAS[5.00] = (long) rest/500;
	printf("%d nota(s) de R$ 5.00\n", NOTAS[5.00]);
	rest = rest%500;

	NOTAS[2.00] = (long) rest/200;
	printf("%d nota(s) de R$ 2.00\n", NOTAS[2.00]);
	rest = rest%200;
	

	printf("MOEDAS:\n");


	NOTAS[1.00] = (long) rest/100;
	printf("%d nota(s) de R$ 1.00\n", NOTAS[1.00]);
	rest = rest%100;

	NOTAS[0.50] = (long) rest/50;
	printf("%d nota(s) de R$ 0.50\n", NOTAS[0.50]);
	rest = rest%50;

	NOTAS[0.25] = (long) rest/25;
	printf("%d nota(s) de R$ 0.25\n", NOTAS[0.25]);
	rest = rest%25;

	NOTAS[0.10] = (long) rest/10;
	printf("%d nota(s) de R$ 0.10\n", NOTAS[0.10]);
	rest = rest%10;

	NOTAS[0.05] = (long) rest/05;
	printf("%d nota(s) de R$ 0.05\n", NOTAS[0.05]);
	rest = rest%05;

	NOTAS[0.01] = (long) rest/01;
	printf("%d nota(s) de R$ 0.01\n", NOTAS[0.01]);
	rest = rest%01;
	*/
}
