#include <iostream>
#include <cmath>

using namespace std;
int main() {
	while(1){
		int x1,y1, x2, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		if(x1==y1 and x2==y2 and x1==x2 and x1==0)
			return 0;

		if(x1==x2 and y1==y2)
			printf("0\n");
		else if(x1==x2 || y1==y2)
			printf("1\n");
		else if( abs(x2-x1)==abs(y2-y1) || abs(x1-x2)==abs(y1-y2))
			printf("1\n");
		else
			printf("2\n");
		
	}
	return 0;
}
