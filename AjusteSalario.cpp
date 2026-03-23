#include<stdio.h>


int main(){
	float salario, c1, c2, c3, c4;
	int codigo;
	printf("O codigo do seu cargo eh 1, 2, 3, 4 ou 5? ");
	scanf("%i", &codigo);
	printf("Digite seu salario atual: ");
	scanf("%f", &salario);
	c1 = (salario / 2) + salario;
	c2 = (salario * 0.35) + salario;
	c3 = (salario * 0.2) + salario;
	c4 = (salario * 0.1) + salario;
	
	if(codigo == 1){
		printf("Cargo: Escrituario\nSalario atual: R$%.2f\nValor do aumento: 50 por cento.\nNovo salario: R$%4.f", salario, c1);
	}else if(codigo == 2){
		printf("Cargo: Secretario\nSalario atual: R$%.2f\nValor do aumento: 35 por cento.\nNovo salario: R$%4.f", salario, c2);
	}else if(codigo == 3){
		printf("Cargo: Caixa\nSalario atual: R$%.2f\nValor do aumento: 20 por cento.\nNovo salario: R$%4.f", salario, c3);
	}else if(codigo == 4){
		printf("Cargo: Gerente\nSalario atual: R$%.2f\nValor do aumento: 10 por cento.\nNovo salario: R$%4.f", salario, c4);
	}else{
		printf("Cargo: Diretor\nSalario atual: R$%.2f\nNao tem aumento.", salario);
	}
}
