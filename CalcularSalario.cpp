#include<stdio.h>


int main(){
	float salario, b1, b2, b3, b4, b5, b6;
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	b1 = (salario * 0.05) + salario;
	b2 = (salario * 0.12) + salario;
	b3 = b1 + 150;
	b4 = b2 + 150;
	b5 = b2 + 100;
	b6 = salario + 100;
	
	if(salario <= 500){
		printf("Salario com bonificacao e auxilio-escola: R$%.2f", b3);
	}else if((salario > 500 && salario <=600)){
		printf("Salario com bonificacao e auxilio-escola: R$%2.f", b4);
	}else if((salario > 500 && salario <=1200)){
		printf("Salario com bonificacao e auxilio-escola: R$%.2f", b5);
	}else{
		printf("Seu salario nao possui bonificacao, mas com o auxilio-escola passou a ser: R$%4.f", b6);
	}
}
