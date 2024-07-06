/*
Diferença de idade se é de maior ou de menor
Autor:Lucas Gabriel
*/

 #include <stdio.h>
 #include <stdlib.h>
 
 int main(){

	int idade;
	
	printf("Bem vindo ao sistema:\n");
	
	printf("Sistema para saber se a pessoa e de Maior de idade:\n");
	printf("Entre com a idade :\n");
	printf("Para sair do sistema entre com 0:\n\n");
	
	scanf("%d",&idade);
	
		if(idade >= 18){
			printf("Voce e de Maior:\n");
		}else{
			printf("Voce e de Menor:\n");
		}
		
	printf("FIM DO SISTEMA");
 	return 0;
 }
