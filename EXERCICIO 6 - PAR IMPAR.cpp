#include<stdio.h>
#include<locale.h>
int main(){
	int x,res;
	printf("entre com o numero desejado: ");
	scanf("%i", & x);
	res=(x%2);
	if(res==0)
{
	printf("Numero par");
}	
else
{
	printf("Numero impar");
	}	
}
