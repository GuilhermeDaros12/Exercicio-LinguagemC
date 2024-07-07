#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	float peso, altura, imc;
	printf("Entre com sua peso: ");
	scanf("%f",& peso);
	printf("Entre com sua altura: ");
	scanf("%f",& altura);
	imc = peso/(altura*altura);
	if(imc>= 17 && imc <40)
{
    printf("Peso ideal");	
}
else
{
	printf("Acima do peso");
}
}
