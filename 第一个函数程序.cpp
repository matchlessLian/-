#include <stdio.h>
double AVG(double sum);
double SUM(double score[]);
int main( )
{
  double score[10];
  int i;
  for(i=0;i<10;i++)
  {
    scanf("%lf",&score[i]);
  }

  double sum=SUM(score);
  double avg=AVG(sum);
  printf("%.2f",avg);
  return 0;
}
double SUM(double score[])
{
	int i;
	double sum=0;
	for(i=0;i<10;i++)
	{
		sum+=score[i];
	}
	return sum;
}
double AVG(double sum)
{
	double avg=0;
	avg=sum/10;
	return avg;
}
