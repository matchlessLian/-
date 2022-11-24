#include<stdio.h>
enum Day
{
	Mon,
	Tue,
	Wes,
	Thr,
	Fri,
	Sat,
	Sun,
};
int main()
{
	enum Day b=Sun;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n",Mon,Tue,Wes,Thr,Fri,Sat,Sun);
	return 0;
}
