#include<stdio.h>
#include<locale.h>

int main(){
	int matriz [3][3]={ {7,10,15},
						{9,18,17},
						{20,25,41}};
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			printf("\nMatriz[%i][%i]: %i", i,j,matriz[i][j]);
		}
	}					
}
