#include<stdio.h>
#include<locale.h>
int main(){
float real, dolar, euro, libra, peso;
int op;
  	printf("Conversor de moedas: ");
	printf("Digite 1 (Real - Dolar)");
	printf("Digite 2 (Real - Euro)");
	printf("Digite 3 (Real - Libra)");
	printf("Digite 4 (Real - Peso)");
	printf("Entre com a op��o: ");
	scanf("%i", &op);
switch(op){
	case 1:
		printf("\nEntre com o valor em Real: ");
		scanf("%f",&real);
		printf("\nCota��o do D�lar: ")
		scanf("%f",&dolar);
		printf("\nConvers�o : %f d�lares", real/dolar);
		break;
	case 2:
		printf("\nEntre com o valor em Rea: l");
		scanf("%f",&real);
		print("\nCota��o do Euro: ");
		scanf("%f",&euro);
		printf("\nCovers�o /; %f euro", real/euro);
		break;
	}
}


