#include<stdio.h>


int main(){
	float l1, l2, l3;
	printf("Digite o lado 1 de um tringulo: ");
	scanf("%f", &l1);
	printf("Digite o lado 2 de um tringulo: ");
	scanf("%f", &l2);
	printf("Digite o lado 3 de um tringulo: ");
	scanf("%f", &l3);
	
	if(l1 + l2 > l3){
		printf("Triangulo valido!\n");
	}else{
		printf("Triangulo nao eh valido!");
		return 0;
		}
	if (( l1 == l2 && l2 == l3)){
	printf("eh um triangulo equilatero");
	}else if ((l1 != l2 && l1 != l3 && l2  != l3)){
		printf("eh um triangulo escaleno");
	}else if ((l1 == l2 && l2 != l3 && l1 != l3)){
		printf("eh um triangulo isosceles");
	}
}
	
