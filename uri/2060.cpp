#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	int N;

	scanf("%d", &N);
	
	int type;
	typedef decltype (type) TD;

	std::vector<TD> v {0,0,0,0};

	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &type);
		/* code */
		v[0] +=(type%2==0);
		v[1] +=(type%3==0);
		v[2] +=(type%4==0);
		v[3] +=(type%5==0);
	}

	printf("%d Multiplo(s) de 2\n", v[0]);
	printf("%d Multiplo(s) de 3\n", v[1]);
	printf("%d Multiplo(s) de 4\n", v[2]);
	printf("%d Multiplo(s) de 5\n", v[3]);

	return 0;
}