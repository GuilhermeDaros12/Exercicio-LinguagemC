#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	float c,f;
	printf("Coloque a temperatura em celsius: ");
	scanf("%f",&c);
	f = (c*1.8)+32;
	printf("Temperatura em Fahrenheit é de: %.1f ",f);
}
