#include<iostream>
#include<cmath>
#include<map>
#define loop(x, n) for(int i= 0; i<n; i++)

using namespace std;

map<const int,long> lista;
map<const int,long>::iterator it;

long calcFatorial(long n){
	long saida;
	if(n<=1)
		saida = 1;
	else{
		it = lista.find(n);
		if(it != NULL)
			saida = it->second;
		else{
			saida = n*calcFatorial(n-1);
			lista.
		}

	}
}

int main(){
	
	long a, b;
	while(scanf("%li %li", &a, &b) != EOF){

	}	
	return 0;
}
