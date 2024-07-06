/*
O c�digo l� o valor do sal�rio e da presta��o do usu�rio. Em seguida.
Calcula o valor do empr�stimo, que � 20% do saldo. 
Por fim, verifica se o valor do empr�stimo � maior ou igual ao valor da presta��o. Se for, o empr�stimo � concedido. 
Se n�o for, o empr�stimo � negado.
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
	printf("Entre com o valor da presta��oa ser PAGA\n");
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
