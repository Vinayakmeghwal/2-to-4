#include<stdio.h>
int main()
{
	float km ,mm; //km=kilometer,mm=milimeter
	printf("\nenter the distance between two cities (in km)=)" );
	scanf("%f",&km);
	mm=km*1000000;
	printf("\ndistance between two cities (in cm)=%2f.",mm);
	return 0;
}
