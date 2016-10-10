#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	int type;
	typedef decltype (type) TD;
	double valor;

	std::vector<TD> v1 {0,0};

	float total=0;
	for (int i = 0; i < 2 ; ++i)
	{
		scanf("%d %d %lf", &v1[0], &v1[1], &valor);
		total+=(v1[1]*valor);
	}

	printf("VALOR A PAGAR: R$ %.2f\n", total);
	return 0;
}