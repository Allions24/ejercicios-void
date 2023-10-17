#include<stdio.h>
int suma(int num);
int main ()
{
	int sum, num1, num2;
	printf ("Introduccir dos numeros a sumar:\n");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf ("la suma es:%d", sum);
	return 0;
}
void suma (int a, int b)
{
	int add = a + b; 
}
