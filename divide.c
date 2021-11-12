#include<stdio.h>
void main()
{
	int m, h;
	printf("enter number of minutes");
	scanf("%d", &m);
	h =m/60 ;
	m = m%60;
	printf("%d hour(s) %d minutes", h, m);
}
