#include <iostream>

using namespace::std;

int main(){
	int a;
	int rest;

	scanf("%d", &a);	
	
	rest = a%365;
	a/=(int)365;
	
	printf("%d ano(s)\n", a);

	a=(int) rest/30;
	rest = rest%30;

	printf("%d mes(es)\n",a);

		
	printf("%d dia(s)\n",rest);

	
	
}

