#include <iostream>
#include <cmath> 

using namespace std;

int main(){
	
	int time[7];
	while(scanf("Dia %d\n%d : %d : %d\nDia %d\n%d : %d : %d\n", &time[0], &time[1], &time[2], &time[3], &time[4], &time[5], &time[6], &time[7]) == 8){
	}

	long time_1 = time[0]*86400+time[1]*3600+time[2]*60+time[3];
	long time_2 = time[4]*86400+time[5]*3600+time[6]*60+time[7];
	long t_time = fabs(time_1-time_2);

	long aux = (long) t_time/86400;;
	printf("%ld dia(s)\n",aux);
	t_time = t_time%86400;
		
	aux = (long) t_time/3600;
	printf("%ld hora(s)\n",aux); 
	t_time = t_time%3600;

	aux = (long) t_time/60;
	printf("%ld minuto(s)\n", aux);
	t_time = t_time%60;

	printf("%ld segundo(s)\n", t_time);
	
	return 0;
}
