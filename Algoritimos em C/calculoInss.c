 /*
Objetivo: Elabore codificação que recebe como entrada o valor da hora de
trabalhoe o número de horas trabalhadas por um funcionário e
calcula o seusalário bruto, exibindo-o na tela.
Em seguida, o programa deve ler opercentual de desconto devido ao INSS e
calcular então o salário líquidodo funcionário, exibindo-o na tela também.
 */
 
 struct valores{
	float h_trabalho; // valor horas trabalhadas
	float v_trabalho; //valor da hora de trabalho
	
	float inss; // valor do desconto do INSS
	
 };
 
 int main(){
 	
 	struct valores v;
 	
 	printf("Entre com o Valor das horas trabalhadas:\n");
 	scanf("%f",&v.h_trabalho);
 	printf("Entre com a Horas trabalhadas :\n");
 	scanf("%f",&v.v_trabalho);
 	
 	float sal_bruto = v.h_trabalho * v.v_trabalho;
 	
 	printf("\nO salario bruto do funcionario e:\n%g",sal_bruto);
 	
 	printf("\nEntre com o valor do desconto do inss:\n");
 	scanf("%f",&v.inss);
 	
 	float sal_liquido = sal_bruto - v.inss;
 	
 	printf("\nO salario Liquido e:\n%g",sal_liquido);
 }
