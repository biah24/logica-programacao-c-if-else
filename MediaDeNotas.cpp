#include<stdio.h>

int main(){
	
	float n1, n2, n3, media;
	
	printf("Digita a nota do trabalho de laboratorio: ");
	scanf("%f", &n1);
	printf("Digita a nota da Avaliacao semestral: ");
	scanf("%f", &n2);
	printf("Digita a nota do Exame final: ");
	scanf("%f", &n3);
	
	media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
	
	if((media >= 0 && media <= 4.99)){
		printf("A media de suas notas foi de: %f, entao voce eh E", media);
		
	}else if((media >= 5 && media <= 5.99)){
		printf("A media de suas notas foi de: %f, entao voce eh D", media);
		
	}else if((media >= 6 && media <= 6.99)){
		printf("A media de suas notas foi de: %f, entao voce eh C", media);
		
	}else if((media >= 7 && media <= 7.99)){
		printf("A media de suas notas foi de: %f, entao voce eh B", media);
	}else{
		printf("A media de suas notas foi de: %f, entao voce eh A", media);
	}
	
	
}
