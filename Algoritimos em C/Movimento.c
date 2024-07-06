/*
Calculo sobre o movimento retilinio uniforme acelerado:
Autor:Lucas Gabriel
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	
	
	float so;
	float vo;
	float a;
	float delta_t;
	
	printf("Calculo de movimento retilinio uniforme acelerado:\n");

	
	printf("Entre com o SO:\n");
	scanf("%f",&so);
	printf("Entre com o VO:\n");
	scanf("%f",&vo);
	printf("Entre com o A :\n");
	scanf("%f",&a);
	printf("Entre com o Delta_T:\n");
	scanf("%f",&delta_t);
	
	float v = (vo + a * delta_t);
	
	float s = so + vo *delta_t + a * (delta_t * delta_t)/2;
	
	printf("A velocidade  = %g\n",v);
	printf("O espaco decorrido = %g\n",s);
	
}
