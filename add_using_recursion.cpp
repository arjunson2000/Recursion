#include<stdio.h>

char a[]={'s','i','t','e','t','c'};
void f(int i)
{

	printf("%c",a[i]);
	i--;
	if(a[i]!='\1')
	f(i);	
		
}

main()
{
	f(5);
}

