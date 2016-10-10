#include<iostream>
#include<cmath>
#define loop(x, n) for(int x=0; x<n; x++)

using namespace std;
using point = pair<double, double>;

class Triangle {
	public:
		double a, b, c;
		Triangle(double av, double bv, double cv) : a(av), b(bv), c(cv) {}
		
		double AB = acos((c*c - a*a - b*b)/(-2*a*b));
		double AC = acos((b*b - a*a - c*c)/(-2*a*c));
		double BC = acos((a*a - b*b - c*c)/(-2*b*c));
		
		double perimetro() const {
			return a + b + c;
		}
		
		double area() const
		{
			auto s = perimetro() / 2.0;

			return sqrt(s*(s - a)*(s - b)*(s - c));
		}
};


double areas(Triangle T, const double a, const double b, const double c){
	double area1, area2, area3;
	area1 = T.AB/2.0 * a * a;
	area2 = T.AC/2.0 * c * c;
	area3 = T.BC/2.0 * b * b;

	return T.area()-(area1+area2+area3);
}

int main(){
	int caseT;
	scanf("%d", &caseT);

	int t = 0;
	double a, b, c;

	loop(x, caseT){
		scanf("%lf %lf %lf\n", &a, &b, &c);
		Triangle T(a+c, a+b, b+c);
	
		double area = T.area();	
		printf("%.6lf\n", areas(T, a, b, c));
	}
	return 0;
}
