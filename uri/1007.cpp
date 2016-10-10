#include <iostream>

int main(int argc, char const *argv[])
{
	long long A, B, C, D;
	long long DIFERENCA;

	scanf("%lld\n%lld\n%lld\n%lld", &A, &B, &C, &D);
	DIFERENCA = (A*B - C*D);
	printf("DIFERENCA = %lld\n", DIFERENCA);

	return 0;
}