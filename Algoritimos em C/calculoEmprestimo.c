/*
O código lê o valor do salário e da prestação do usuário. Em seguida.
Calcula o valor do empréstimo, que é 20% do saldo. 
Por fim, verifica se o valor do empréstimo é maior ou igual ao valor da prestação. Se for, o empréstimo é concedido. 
Se não for, o empréstimo é negado.
*/

#include <stdio.h>
#include <stdlib.h>


struct Valores{
	float saldo;
	float prestacao;
};


int main(){
	
	struct Valores v;
	
	printf("Entre com o valor do SALARIO\n");
	scanf("%f",&v.saldo);
	printf("Entre com o valor da prestaçãoa ser PAGA\n");
	scanf("%f",&v.prestacao);
	
	float emprestimo = (v.saldo/100*20);
	
	if(emprestimo >= v.prestacao){
		printf("Emprestimo Concedido!!\n");
		printf("O valor do emprestimo %g",emprestimo);
	}else{
		printf("Emprestimo negado!!\n");
	}
	
	
	return 0;
	
}
