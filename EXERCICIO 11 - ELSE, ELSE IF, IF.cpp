#include <stdio.h>
#include<locale.h>
	int main(){
		setlocale(LC_ALL,"");
		float salario, salario_bonus;
		int pontuacao;
		printf("Entre com o salario: ");
		scanf("%f", &salario);
		printf("Entre com a pontuação: ");
		scanf("%i",&pontuacao);
		if(pontuacao >=1000){
			salario_bonus = salario + 500;
			printf("Salario Bônus: %f", salario_bonus);
		}
		else if (pontuacao >= 500 && pontuacao <= 999){
			salario_bonus = salario + 300;
			printf("Salário Bônus: %f", salario_bonus);
		}
		
	}
