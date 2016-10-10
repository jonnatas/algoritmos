#include <iostream>
#include <cmath>


using namespace std;


class Point {
	public:
		long double x, y;
		Point(long double xv=0, long double yv=0) : x(xv), y(yv){
		}	
};

int main(){
	
	Point p, q(1.12345678900987654321), r(2,3);
	char *a;
	scanf("%[^\n]s", a);

	printf("\n%s\n", a);

	printf("\n%Lf %Lf", p.x, p.y);

	printf("\n%Lf %Lf", q.x, q.y);
	
	printf("\n%Lf %Lf\n", r.x, r.y);
	
	return 0;
}
