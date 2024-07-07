#include<stdio.h>
#include<locale.h>
int main()
{
	float n1,n2,media;
	printf("entre com a nota 1: ");
	scanf("%f",&n1);
	printf("entre com a nota 2: ");
	scanf("%f",&n2);
	media = (n1 + n2)/2;
	printf("Media: %.2f",media);
}
