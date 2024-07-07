#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	float area, larg, comp;
	printf("Entre com a largura: ");
	scanf("%f",&larg);
	printf("Entre com o comprimento: ");
	scanf("%f",&comp);
	area = larg * comp;
	printf("Area do terreno:%.2f",area);
}
