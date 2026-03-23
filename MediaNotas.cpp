#include<stdio.h>


int main(){
	float n1, n2, n3, media, exame;
	
	printf("Digita a primera nota: ");
	scanf("%f", &n1);
	printf("Digita a segunda nota: ");
	scanf("%f", &n2);
	printf("Digita a terceira nota: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	exame = 12 - media; 
	
	if(media >= 0.00 && media <= 2.99){
		printf("REPROVADO");
	}else if(media >= 3 && media <= 6.99){
		printf("EXAME. A nota que voce precisa tirar eh: %2.f", exame);
	}else{
		printf("APROVADO");
		}
	}
