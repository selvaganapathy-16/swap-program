#include<stdio.h>
int main()
{
int a= 4,b=7;
printf("before swwaing a=%d \n b=%d\n",a,b);
a=a*b;
b=a/b;
a=a/b;
printf("\nafter swaing a=%d\n b=%d",a,b);
	return 0;
	
}
