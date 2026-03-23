#include<stdio.h>
//Faça um programa que receba um número e informe se ele é positivo, negativo ou zero.

int main (){
	float num;
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	if (num > 0){
		printf("Positivo");
	}else if (num < 0){
		printf("Negativo");
	}else {
		printf("zero");
	}
	
	
}

