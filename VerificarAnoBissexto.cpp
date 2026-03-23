//Escreva um programa que verifique se um ano informado pelo usuário é bissexto ou não.
#include<stdio.h>

int main(){
	int ano;
	printf("Digite o ano: ");
	scanf("%i", &ano);
	
	if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0){
		printf("O ano eh bissexto");
	}else{
		printf("O ano nao eh bissexto");
	}
}
