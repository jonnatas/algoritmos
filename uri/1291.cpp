#include<iostream>
#include<cmath>
#define PI acos(-1)
#define loop(x, n) for(int i=0 ; i<n; i++) 
#define EPS 1e-9
using namespace std;

using point = pair<double, double>;

bool equals(double a, double b)
{
    return fabs(a - b) < EPS;
}
class Circle {
public:
        point C;
	double r;

	Circle(const point& Cv = point(0, 0), double rv = 1.0) : C(Cv), r(rv) {}

	double perimeter() const
	{
	return 2.0 * PI * r;
	}
	double area() const{
		return PI * r * r;
	}
	double chord(double a) const
	{
		return 2 * r * sin(a/2);
	}
	double sector(double a) const
	{
		return a * r * r / 2.0;
	}
	double segment(double a) const
	{
		auto c = chord(a);
		auto s = (r + r + c)/2.0;                   // Semiperímetro
		auto T = sqrt(s*(s - r)*(s - r)*(s - c));   // Área do triângulo

		return sector(a) - T;
	}

	double calc(){
	//double area_S = sector(PI/2);	
	double area_seg = 2*segment(PI/2);
	}
};


int main(){
	double a;
	point O(0,0);
	while(scanf("%lf", &a) != EOF){
		Circle C(O,a);
		
	}
	return 0;
}
