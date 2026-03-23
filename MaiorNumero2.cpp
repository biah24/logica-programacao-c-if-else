//Faça um programa que receba tręs números e mostre o maior.
#include<stdio.h>
int main (){
	float n1, n2, n3;
	
	printf("Digite N1: ");
	scanf("%f", &n1);
	printf("Digite N2: ");
	scanf("%f", &n2);
	printf("Digite N3: ");
	scanf("%f", &n3);
	
	if ((n1 > n2 && n1 > n3)){
		printf("Maior: %2.f", n1);
	}
	if ((n2 > n1 && n2 > n3)){
	
		printf("Maior: %2.f", n2);
    }
    if ((n3 > n1 && n3 > n2)){
	
		printf("Maior: %2.f",n3);
		
    }else{
    	printf("Eles sao iguais.");
	}
}
