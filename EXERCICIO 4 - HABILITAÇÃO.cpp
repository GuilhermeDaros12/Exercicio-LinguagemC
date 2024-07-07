#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL,"");
	float idade;
	printf("Entre com a sua idade: ");
	scanf("%f",&idade);
	if (idade >=18)
{
	printf("Apto a dirigir ");
}
else
{
	printf("Não apto a dirigir ");
}
}
