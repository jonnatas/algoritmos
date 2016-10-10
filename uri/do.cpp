#include <iostream>
#include <algorithm>


using namespace::std;

int main(){


	int a, b, n, c, res;

	while(scanf("%d %d", &a, &b)==2){
		printf("%d %d ", a,b);
		int res=0, c;
		for(int i=min(a,b); i<=max(a,b); ++i)	{
			n=i;
			c=1;
			while(n>1){
				if(n%2){
					n=3*n+1;
				}
				else{
					n/=2;
				}
			c++;
			}
		res = max(res,c);
		}
			printf("%d\n",res);
			
	}
	return 0;
	
}
