#include<stdio.h>
#include<math.h>

int main(){
	float salario, imp1, imp2;
	
	printf("Digite seu salario: ");
	scanf ("%f", &salario);
	
	imp1 = (salario * 0.1);
	imp2 = (salario * 0.2);
	
	if(salario <= 2000){
		printf("Isento de imposto!");
	}else if ((salario > 2000 && salario <= 4000 )){
		printf("O valor de imposto a ser pago eh de: R$%4.f", imp1);
	}else{
		printf("O valor de imposto a ser pago eh de: R$%4.f", imp2);
	}
}
	
	
