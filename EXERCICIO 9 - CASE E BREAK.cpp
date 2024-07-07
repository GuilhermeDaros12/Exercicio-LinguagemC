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
	printf("Entre com a opção: ");
	scanf("%i", &op);
switch(op){
	case 1:
		printf("\nEntre com o valor em Real: ");
		scanf("%f",&real);
		printf("\nCotação do Dólar: ")
		scanf("%f",&dolar);
		printf("\nConversão : %f dólares", real/dolar);
		break;
	case 2:
		printf("\nEntre com o valor em Rea: l");
		scanf("%f",&real);
		print("\nCotação do Euro: ");
		scanf("%f",&euro);
		printf("\nCoversão /; %f euro", real/euro);
		break;
	}
}


