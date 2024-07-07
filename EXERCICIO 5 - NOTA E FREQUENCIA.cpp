#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
	float n1, n2, freq, media=0;
	printf("Entre com a nota 1: ");
	scanf("%f",&n1);
	printf("Entre com a nota 2: ");
	scanf("%f",&n2);
	printf("Entre com a frequencia: ");
	scanf("%f",&freq);
	media = (n1 + n2)/2;
	printf("sua media foi %.2f", media);
	if(media >=6 && freq >= 75)
{
	printf(" aluno aprovado ");
}
else
{
	printf(" aluno reprovado ");
}
}

