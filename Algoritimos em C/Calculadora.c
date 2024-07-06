//Calc
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void soma(){
	int n1, n2, total;
	
	printf("SOMA\n\n");
	printf("Entre com o Primeiro Numero:\n");
	scanf("%d", &n1);
	
	printf("Entre com o Segundo Numero:\n");
	scanf("%d", &n2);
	
	total = n1 + n2;
	printf("O Resultado e:%d\n", total);
}

void sub(){
	int n1, n2, total;
	
	printf("SUBTRACAO\n\n");
	printf("Entre com o Primeiro Numero:\n");
	scanf("%d", &n1);
	
	printf("Entre com o Segundo Numero:\n");
	scanf("%d", &n2);
	
	total = n1 - n2;
	printf("O Resultado e:%d\n", total);
}

void mult(){
	int n1, n2, total;
	
	printf("MULTIPLICACAO\n\n");
	printf("Entre com o Primeiro Numero:\n");
	scanf("%d", &n1);
	
	printf("Entre com o Segundo Numero:\n");
	scanf("%d", &n2);
	
	total = n1 * n2;
	printf("O Resultado e:%d\n", total);
}

void divi(){
	
	int n1, n2, total;
	
	printf("DIVISAO\n\n");
	printf("Entre com o Primeiro Numero:\n");
	scanf("%d", &n1);
	
	printf("Entre com o Segundo Numero:\n");
	scanf("%d", &n2);
	
	total = n1 / n2;
	printf("O Resultado e:%d\n", total);
}

void menu(){
	
	int loop;	
	
	for(loop = 1; loop <=10; loop++ ){
	
	int op;

	
	
	
	printf("||------------------------------------------||\n");
	printf("||--------------CALCULADORA ----------------||\n");
	printf("||-------------- 1: SOMA -------------------||\n");
	printf("||-------------- 2: SUBTRACAO --------------||\n");
	printf("||-------------- 3: MULTIPLICACAO ----------||\n");
	printf("||-------------- 4: DIVISAO ----------------||\n");
	printf("||-------------- 0: SAIR -------------------||\n");
	printf("||------------------------------------------||\n\n");
	scanf("%d", &op);
	printf("\n\n");
	
		switch(op){
			
			case 1:
				soma();
			 	break;	
			
			case 2:
				sub();
				break;	
			
			case 3:
				mult();
				break;
			
			case 4:
				divi();
				break;
					
				case 0:
					return 0;
		}
	}
}

int main(){
	
	menu();	

}
