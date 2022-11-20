//AUTHOR = VINAYAK MEGHWAL
#include<stdio.h>
int main()
{
	float km,cm; //km = kilometer , cm = centimeter
	printf("\nenter the distance between two cities (in km) =");
	scanf("%f",&km);
	cm= km*100000;
	printf("\ndistance between two cities(in cm) = %.2f",cm);
	return 0;
}
